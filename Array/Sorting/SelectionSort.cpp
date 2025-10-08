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

  cout << "Array before Sorting : ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << "\nArray after Sorting : ";

  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }

      int temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}