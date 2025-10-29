#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // TC: O(n+m)
  // SC: O(n+m)
  int n;
  cin >> n;

  int m;
  cin >> m;

  int *arr1 = new int[n];
  int *arr2 = new int[m];

  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }

  cout << "Union of two arrays : ";

  vector<int> ans;

  int i = 0, j = 0;

  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      ans.push_back(arr1[i++]);
    }
    else
    {
      ans.push_back(arr2[j++]);
    }
  }
  while (i < n)
  {
    ans.push_back(arr1[i++]);
  }

  while (j < m)
  {
    ans.push_back(arr2[j++]);
  }

  for (int it : ans)
  {
    cout << it << " ";
  }

  /*
  other approach to eliminate the duplicate values from the union

  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      if (ans.empty() || ans.back() != arr1[i]) ans.push_back(arr1[i]);
      i++;
    }
    else if (arr2[j] < arr1[i]) {
      if (ans.empty() || ans.back() != arr2[j]) ans.push_back(arr2[j]);
      j++;
    }
    else {
      // both are equal, push only once
      if (ans.empty() || ans.back() != arr1[i]) ans.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  // Add remaining elements
  while (i < n) {
    if (ans.empty() || ans.back() != arr1[i]) ans.push_back(arr1[i]);
    i++;
  }
  while (j < m) {
    if (ans.empty() || ans.back() != arr2[j]) ans.push_back(arr2[j]);
    j++;
  }

  cout << "Union of two arrays : ";
  for (int x : ans) cout << x << " ";

  */
  // delete[] arr1, arr2; => It will only delete arr1 not arr2
  delete[] arr1;
  delete[] arr2;
  return 0;
}