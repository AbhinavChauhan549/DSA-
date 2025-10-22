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

  cout << "Array Before: ";

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  bool sorted = true;
  for (int i = 0; i < n - 1; i++)
  {
    int j = i + 1;

    if (arr[j] < arr[i])
    {
      sorted = false;
    }
  }

  cout << "\nArray sorted (0: Not sorted , 1 : sorted): " << sorted;
  return 0;
}