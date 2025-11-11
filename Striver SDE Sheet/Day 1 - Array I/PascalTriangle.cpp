#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// for pascal triangle of R and C we need to calculate R-1 C C-1
vector<int> generatePascalRow(int row)
{
  int ans = 1;
  vector<int> sol;

  sol.push_back(ans);

  for (int i = 1; i < row; i++)
  {
    ans = ans * (row - i);
    ans = ans / i;
    sol.push_back(ans);
  }
  return sol;
}
int main()
{

  int n;
  cout << "Enter the number of rows to print Pascal triangle : ";

  cin >> n;

  vector<vector<int>> result;

  // now calucate and store values of pascal triangle for each row
  for (int i = 1; i <= n; i++)
  {
    vector<int> temp = generatePascalRow(i);
    result.push_back(temp);
  }

  // now print the pascal triangle
  for (int i = 0; i < result.size(); i++)
  {
    for (int j = 0; j < result[i].size(); j++)
    {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}