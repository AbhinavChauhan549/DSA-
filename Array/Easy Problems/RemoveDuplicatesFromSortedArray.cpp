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

  cout << "Array before : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  // approach 1 : using two loops(works for both sorted and unsorted array)
  // TC: O(N^2)
  // SC: O(1)
  cout << "\nArray after removing duplicates: ";

  for (int i = 0; i < n; i++)
  {
    bool isDuplicate = false;

    // check if arr[i] appeared before
    for (int j = 0; j < i; j++)
    {
      if (arr[i] == arr[j])
      {
        isDuplicate = true;
        break;
      }
    }

    if (!isDuplicate)
    {
      cout << arr[i] << " ";
    }
  }

  //  Better approach : using map(works for both sorted and unsorted array)
  // TC: O(N)
  // SC: O(N)
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]++;
  }

  cout << "\nArray after removing duplicates (map): ";
  for (auto it : mp)
  {
    cout << it.first << " ";
  }

  // Optimal approach : but only works for sorted array

  int index = 0;
  cout << "\nArray after removing duplicates : ";
  for (int i = 1; i < n; i++)
  {
    if (arr[index] != arr[i])
    {

      arr[index + 1] = arr[i];
      index++;
    }
  }
  for (int i = 0; i <= index; i++)
  {
    cout << arr[i] << " ";
  }
  delete[] arr; // cleanup
  return 0;
}