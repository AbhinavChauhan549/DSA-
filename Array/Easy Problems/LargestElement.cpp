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

  cout << "Array Before ; ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int largest = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }

  cout << "\nLargest Element : " << largest;

  return 0;
}