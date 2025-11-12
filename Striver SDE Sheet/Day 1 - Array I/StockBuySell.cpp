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
  cout << "Price Array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int maxProfit = 0;
  int minPrice = arr[0];

  for (int i = 1; i < n; i++)
  {
    maxProfit = max(maxProfit, arr[i] - minPrice);
    minPrice = min(minPrice, arr[i]);
  }
  cout << "\nMaximum by stock buy and sell : " << maxProfit;

  delete[] arr;
  return 0;
}