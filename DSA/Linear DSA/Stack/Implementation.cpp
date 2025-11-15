#include <iostream>
using namespace std;
class Stack1
{
private:
  int arr[100];
  int top;

public:
  Stack1()
  {
    top = -1;
  }

  void push(int x)
  {
    if (top == 99)
    {
      cout << "Overflow in stack ";
      return;
    }
    arr[++top] = x;
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Underflow in stack";
      return;
    }
    top--;
  }

  int peek()
  {
    if (top == -1)
    {
      cout << "Stack Empty\n";
      return -1;
    }
    return arr[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }
};

// stack using dynamic array
class Stack2
{
private:
  int capacity;
  int *arr;
  int top;

public:
  Stack2(int cap)
  {
    capacity = cap;
    arr = new int[cap];
    int top = -1;
  }

  void push(int x)
  {

    if (top == capacity - 1)
    {
      cout << "Overflow of stack";
      return;
    }
    arr[++top] = x;
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Underflow of stack";
      return;
    }
    top--;
  }

  void peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty";
      return;
    }
    cout << arr[top] << endl;
  }

  void stackempty()
  {
    if (top == -1)
    {
      cout << "stack is empty";
    }
    else
    {
      cout << "stack is not empty";
    }
  }
  ~Stack2()
  {
    delete[] arr;
  }
};
int main()
{

  // stack implementation using class(Fixed Size array)
  // Stack1 s1;
  // s1.push(1);
  // s1.push(2);
  // s1.push(3);
  // s1.pop();
  // int topelement = s1.peek();
  // cout << topelement << endl;
  // cout << s1.isEmpty();

  // // stack implementation using dynamic array(allocation to heap)
  // cout << "\nStack2 using dynamic array\n";

  // Stack2 s2(3);
  // s2.push(1);
  // s2.push(2);
  // s2.push(3);
  // s2.pop();
  // s2.peek();
  // s2.stackempty();
  // User based input in the stack

  Stack1 s3;
  int n, value;

  cout << "Enter the number of values you want to enter into the stack : ";
  cin >> n;

  cout << "\nEnter the " << n << " values:";
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    s3.push(value);
  }
  int tip = s3.peek();
  cout << "\n Top element of the stack is " << tip;

  while (!s3.isEmpty())
  {
    cout << "\nDo you want to pop top element (1 for pop / 0 for skip)";
    int status;
    cin >> status;
    if (status == 1)
    {
      s3.pop();
      cout << "\n Top element of the stack is " << s3.peek();
    }
    else
    {
      break;
    }
  }

  return 0;
}