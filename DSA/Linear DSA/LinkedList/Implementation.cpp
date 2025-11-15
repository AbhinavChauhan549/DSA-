#include <iostream>
using namespace std;

// Node class
class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

// Linked List class
class LinkedList
{
private:
  Node *head;

public:
  LinkedList()
  {
    head = NULL;
    cout << "Linked List initialized\n";
  }

  // Insert at last
  void insertAtLast(int data)
  {
    Node *newNode = new Node(data);

    // if list is empty
    if (head == NULL)
    {
      head = newNode;
      return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = newNode;
  }

  // Display linked list
  void display()
  {
    if (head == NULL)
    {
      cout << "Linked list is empty\n";
      return;
    }

    Node *temp = head;
    cout << "Linked list: ";
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main()
{
  LinkedList l;
  int n, value;

  cout << "\nEnter number of nodes: ";
  cin >> n;

  cout << "Enter values:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    l.insertAtLast(value);
  }

  l.display();

  return 0;
}
