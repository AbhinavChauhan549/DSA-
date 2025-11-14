#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // I : static implementation
  int arr1[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " ";
  }
  // II : user input based implementation

  int n;
  cin >> n;

  int arr3[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr3[i];
  }

  // Implementation using vector

  vector<int> arr2;

  arr2.push_back(10);
  arr2.push_back(20);
  arr2.push_back(30);

  for (int x : arr2)
  {
    cout << x << " ";
  }
  // implementation of dynamic array

  int *arr4 = new int[n]; // dynamic allocation

  for (int i = 0; i < n; i++)
  {
    cin >> arr4[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr4[i] << " ";
  }

  delete[] arr4; // free heap memory

  // modern implementation of array , static array + stl features
  array<int, 5> arr5 = {1, 2, 3, 4, 5};

  for (auto x : arr5)
  {
    cout << x << " ";
  }

  // 2D Array
  int arr6[2][3] = {{1, 2, 3}, {4, 5, 6}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr6[i][j] << " ";
    }
  }

  // dynamic 2D array
  int rows = 3, cols = 4;

  int **arr7 = new int *[rows];

  for (int i = 0; i < rows; i++)
  {
    arr7[i] = new int[cols];
  }

  // input
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr7[i][j];
    }
  }

  // print
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr7[i][j] << " ";
    }
    cout << endl;
  }

  // free memory
  for (int i = 0; i < rows; i++)
  {
    delete[] arr7[i];
  }
  delete[] arr7;

  // Dynamic 2D Array using vector<vector<int>>
  int rows = 3, cols = 3;
  vector<vector<int>> arr8(rows, vector<int>(cols));

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      arr8[i][j] = i + j;
    }
  }

  for (auto &row : arr8)
  {
    for (int x : row)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}