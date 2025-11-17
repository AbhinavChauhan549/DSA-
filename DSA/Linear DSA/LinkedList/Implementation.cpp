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

  // Deleting node from the Linked List
  // Deleting from begining

  void deleteBegining()
  {
    if (head == NULL)
    {
      cout << "Linked List is empty\n";
      return;
    }

    Node *temp = head;
    head = head->next;
    delete temp; // free memory
  }

  // Deleting the last node from Linked List
  void deleteLast()
  {
    if (head == NULL)
    {
      cout << "Linked List is empty\n";
      return;
    }

    // If only 1 node
    if (head->next == NULL)
    {
      delete head;
      head = NULL;
      return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp->next != NULL)
    {
      prev = temp;
      temp = temp->next;
    }

    prev->next = NULL;
    delete temp;
  }

  // Deleting a node from a position
  void deletePosition(int position)
  {
    if (head == NULL)
    {
      cout << "Linked List is empty\n";
      return;
    }

    if (position == 1)
    {
      deleteBegining();
      return;
    }

    Node *temp = head;
    Node *prev = NULL;
    int count = 1;

    while (temp != NULL && count < position)
    {
      prev = temp;
      temp = temp->next;
      count++;
    }

    if (temp == NULL)
    {
      cout << "Position out of range!\n";
      return;
    }

    prev->next = temp->next;
    delete temp;
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

  cout << "\nDeleting the first node ";
  l.deleteBegining();

  l.display();

  cout << "\nDeleting the last node ";
  l.deleteLast();

  l.display();

  cout << "\nDeleting the node from the position : ";
  l.deletePosition(2);

  l.display();
  return 0;
}
