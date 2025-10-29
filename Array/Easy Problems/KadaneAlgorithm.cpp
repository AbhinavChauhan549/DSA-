// Maximum Subarray Problem
#include <iostream>
#include <bits/stdc++.h>
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
  cout << "Array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  int currSum = 0;
  int maxSum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    currSum += arr[i];

    if (currSum > maxSum)
    {
      maxSum = currSum;
    }

    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << "Maximum Subarray sum : " << maxSum;

  delete[] arr;
  return 0;
}