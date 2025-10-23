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

  cout << "Array Before : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  for (int i = 0; i < n - 1; i++)
  {
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }

  cout << "\nArray after Rotating by one place: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  // TC: O(N)
  // SC: O(1)

  delete[] arr;
  return 0;
}