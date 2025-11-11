#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
problem statement given arr [3,1,2] we need to find its next permutation

1. first we will find all possible permutations in a sorted mannar
   [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]

2. check the given permutation [3,1,2] and find its next permutation ie [3,2,1]

note: in case of [3,2,1] return the first permutation [1,2,3] as its next permutation ie reverse of last permutation = first permutation in sorted mannar

note: in C++ , for this question we can also use prebuilt stl function =>  next_permutation(arr.begin(),arr.end())

*/

vector<int> nextPermutation(vector<int> &arr, int n)
{

  // we will use an index to find the next permutation
  int index = -1;

  // we will iterate through an array to check whether it is in ascending order from right to left
  // 2 1 5 4 3 0 0 => like here from right to left ( 0 -> 5 its in ascending ) after 5 there is an dip ie 1
  // we need to find the same dip in the given array
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] < arr[i + 1])
    {
      index = i;
      break;
    }
  }

  // but if there is not dip in array then it means its the last permutation among all permutations so we will return the first permutation ie reverse of the last permution
  if (index == -1)
  {
    reverse(arr.begin(), arr.end());
    return arr;
  }

  // now we will swap element at index with the first large element that we would encounter while moving from right to left ie swap 1 and 3
  for (int i = n - 1; i > index; i--)
  {
    if (arr[i] > arr[index])
    {
      swap(arr[i], arr[index]);
      break;
    }
  }

  // now we will reverse all the elements that comes after the index
  reverse(arr.begin() + index + 1, arr.end());

  return arr;
}
int main()
{

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<int> sol(n);
  sol = nextPermutation(arr, n);

  cout << "\nthe next permutation for the following array is : ";
  for (int i = 0; i < n; i++)
  {
    cout << sol[i] << " ";
  }
  return 0;
}