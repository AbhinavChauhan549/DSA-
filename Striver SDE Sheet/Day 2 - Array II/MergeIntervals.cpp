#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // ✅ Initialize intervals properly
  vector<vector<int>> intervals(n, vector<int>(2));

  // ✅ Input
  for (int i = 0; i < n; i++)
  {
    cin >> intervals[i][0] >> intervals[i][1];
  }

  cout << "All Intervals are:\n";
  for (int i = 0; i < n; i++)
  {
    cout << intervals[i][0] << " " << intervals[i][1] << endl;
  }

  // ✅ Sort intervals by start time
  sort(intervals.begin(), intervals.end());

  vector<vector<int>> solution;

  // ✅ Merge logic
  for (int i = 0; i < n; i++)
  {
    if (solution.empty() || solution.back()[1] < intervals[i][0])
    {
      solution.push_back(intervals[i]);
    }
    else
    {
      solution.back()[1] = max(solution.back()[1], intervals[i][1]);
    }
  }

  cout << "\nAfter Merging Intervals:\n";
  for (int i = 0; i < solution.size(); i++)
  {
    cout << solution[i][0] << " " << solution[i][1] << endl;
  }

  return 0;
}
