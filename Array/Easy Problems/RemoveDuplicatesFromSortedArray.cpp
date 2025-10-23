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

  // approach 1 : using two loops

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

  //  Better approach : using map

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

  delete[] arr; // cleanup
  return 0;
  return 0;
}