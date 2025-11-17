// Binary Tree Implementation
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Tree
{

private:
  int data;
  Tree *left;
  Tree *right;

public:
  Tree()
  {
    cout << "Binary Tree Initialized " << endl;
  }

  Tree(int data)
  {
    this->data = data;
    left = right = NULL;
  }

  Tree *buildtree()
  {
    int data;
    cout << "Enter data (-1 for no node)";
    cin >> data;

    if (data == -1)
    {
      return NULL;
    }

    Tree *root = new Tree(data);
    cout << "Enter the left child of " << data << endl;
    root->left = buildtree();

    cout << "Enter the right child of " << data << endl;
    root->right = buildtree();

    return root;
  }

  // Traversals
  void preorder(Tree *root)
  {
    if (root == NULL)
      return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
  }

  void inorder(Tree *root)
  {
    if (root == NULL)
      return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }

  void postorder(Tree *root)
  {
    if (root == NULL)
      return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
  }

  void levelOrder(Tree *root)
  {
    if (root == NULL)
    {
      return;
    }

    queue<Tree *> q;
    q.push(root);

    while (!q.empty())
    {
      Tree *temp = q.front();
      q.pop();

      cout << temp->data << " ";

      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }

  int heightTree(Tree *root)
  {
    if (root == NULL)
    {
      return 0;
    }

    int leftHeight = heightTree(root->left);
    int rightHeight = heightTree(root->right);

    return max(leftHeight, rightHeight) + 1;
  }
};
int main()
{

  Tree t;

  cout << "Build your Binary Tree : \n";
  Tree *root = t.buildtree();

  cout << "\nPreorder Traversal: ";
  t.preorder(root);

  cout << "\nInorder Traversal: ";
  t.inorder(root);

  cout << "\nPostorder Traversal: ";
  t.postorder(root);

  cout << "\nLevel Order Traversal: ";
  t.levelOrder(root);

  int height = t.heightTree(root);
  cout << "\nHeight of Tree: " << height << endl;

  return 0;
}