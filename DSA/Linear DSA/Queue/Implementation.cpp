#include <iostream>
using namespace std;

class Queue1
{
private:
  int arr[100];
  int front;
  int rear;

public:
  Queue1()
  {
    front = -1;
    rear = -1;
  }

  void push(int x)
  {
    if (rear == 99)
    {
      cout << "Queue is full (Overflow)\n";
      return;
    }

    if (front == -1)
    {
      front = 0;
    }

    arr[++rear] = x;
  }

  void pop()
  {
    if (front == -1 || front > rear)
    {
      cout << "Queue is empty (Underflow)\n";
      return;
    }

    front++;

    // reset when empty
    if (front > rear)
    {
      front = rear = -1;
    }
  }

  int peek()
  {
    if (front == -1)
    {
      cout << "Queue is empty\n";
      return -1;
    }
    return arr[front];
  }

  bool isEmpty()
  {
    return (front == -1);
  }
};

int main()
{

  Queue1 q;
  int n, value;

  cout << "How many values do you want to insert in the queue? ";
  cin >> n;

  cout << "Enter " << n << " values:\n";

  for (int i = 0; i < n; i++)
  {
    cin >> value;
    q.push(value);
  }

  cout << "\nFront element is: " << q.peek() << endl;

  cout << "Do you want to pop one element? (1 for yes / 0 for no): ";
  int ch;
  cin >> ch;

  if (ch == 1)
  {
    q.pop();
    cout << "After pop, front is: " << q.peek() << endl;
  }

  return 0;
}
