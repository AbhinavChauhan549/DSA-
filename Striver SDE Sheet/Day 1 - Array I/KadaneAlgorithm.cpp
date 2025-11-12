#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

*/
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

    if (maxSum < currSum)
    {
      maxSum = currSum;
    }

    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  cout << "\nSubarray with maximum sum of : " << maxSum;
  return 0;
}