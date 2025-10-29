#include <iostream>
using namespace std;
int main()
{
  // This program is totally based on Kadane algorithm (similar to maximum subarray problem)
  // TC: O(N)
  // SC: O(1)
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int count = 0;
  int max_count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      max_count = max(count, max_count);
    }
    else if (arr[i] == 0)
    {
      count = 0;
    }
  }

  cout << "Maximum Consecutive Ones are : " << max_count;
  return 0;
}