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

  // Insert at beginning
  void insertBegining(int data)
  {
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
  }

  // Insert at any position
  void insertPosition(int data, int position)
  {
    Node *newnode = new Node(data);

    // Case 1: Insert at head
    if (position == 1)
    {
      newnode->next = head;
      head = newnode;
      return;
    }

    Node *temp = head;
    int count = 1;

    // Traverse to node before the desired position
    while (temp != NULL && count < position - 1)
    {
      temp = temp->next;
      count++;
    }

    // Case 2: Position is out of range
    if (temp == NULL)
    {
      cout << "Position out of range! Inserting at last.\n";
      insertAtLast(data);
      return;
    }

    // Case 3: Normal insert
    newnode->next = temp->next;
    temp->next = newnode;
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
    // l.insertAtLast(value);
    l.insertBegining(value);
  }

  l.display();

  int element, position;
  cout << "\nInsert an element and position: ";
  cin >> element >> position;

  l.insertPosition(element, position);

  l.display();

  return 0;
}
