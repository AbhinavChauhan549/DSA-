#include <iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Array before sorting : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << "\nArray after sorting : ";

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}