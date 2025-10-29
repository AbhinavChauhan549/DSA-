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

  cout << "\n Array After : ";

  int i = 0, j = n - 1;

  while (i < j)
  {
    if (arr[i] == 0 && arr[j] != 0)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
    else if (arr[i] != 0)
    {
      i++;
    }
    else if (arr[j] == 0)
    {
      j--;
    }
  }

  for (int a = 0; a < n; a++)
  {
    cout << arr[a] << " ";
  }

  delete[] arr;
  return 0;
}