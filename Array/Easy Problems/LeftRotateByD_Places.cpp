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

  cout << "Array before rotations : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  int d;
  cout << "\nEnter the number of place to rotate : ";
  cin >> d;

  // Brute force : using two loops(It will rotate array in clockwise direction )
  // TC: O(N^2)
  // SC: O(1)
  // int count = 1;
  // while (count <= d)
  // {
  //   for (int i = 0; i < n - 1; i++)
  //   {
  //     int temp = arr[i];
  //     arr[i] = arr[i + 1];
  //     arr[i + 1] = temp;
  //   }
  //   count++;
  // }

  // cout << "\nArray after rotating d places : ";
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  cout << "\n Other Approach for this : ";
  // Second approach : using reverse function (it will rotate anticlockwise)
  // TC: O(N log N)
  // SC: O(1)(if array is already an vector otherwise O(N))
  vector<int> res(arr, arr + n);

  for (int it : res)
  {
    cout << it << " ";
  }
  d = d % res.size();
  reverse(res.begin(), res.begin() + (res.size() - d));
  reverse(res.begin() + (res.size() - d), res.end());
  reverse(res.begin(), res.end());
  cout << "\n Other Approach rotate : ";
  for (int it : res)
  {
    cout << it << " ";
  }
  delete[] arr;
  return 0;
}