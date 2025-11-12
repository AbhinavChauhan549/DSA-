#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseRow(int row[], int n)
{
  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    int temp = row[start];
    row[start] = row[end];
    row[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  int n;
  cin >> n;

  int **matrix = new int *[n];

  for (int i = 0; i < n; i++)
  {
    matrix[i] = new int[n];
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> matrix[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  cout << "\nMatrix after rotating 90 degrees : \n";

  // first we take the transpose of matrix ie matrix[i][j] is swapped with matrix[j][i]
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }

  // secondly we will each row of the matrix
  for (int i = 0; i < n; i++)
  {
    reverseRow(matrix[i], n);
  }
  // Printing the final matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
  delete[] matrix;
  return 0;
}