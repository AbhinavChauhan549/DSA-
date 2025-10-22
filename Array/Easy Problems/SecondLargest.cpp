#include <iostream>
using namespace std;
int main()
{

  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Array before : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  int largest = arr[0];
  int secondlargest = 0;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      secondlargest = largest;
      largest = arr[i];
    }

    if (arr[i] > secondlargest && arr[i] != largest)
    {
      secondlargest = arr[i];
    }
  }

  cout << "\nSecond Largest : " << secondlargest;
  return 0;
}