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

  cout << "Array before rotations : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int d;
  cout << "\nEnter the number of place to rotate : ";
  cin >> d;

  // Brute force : using two loops
  // TC: O(N^2)
  // SC: O(1)
  int count = 1;
  while (count <= d)
  {
    for (int i = 0; i < n - 1; i++)
    {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
    }
    count++;
  }

  cout << "\nArray after rotating d places : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  delete[] arr;
  return 0;
}