#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    // Move i right until element > pivot
    while (arr[i] <= pivot && i <= high - 1)
      i++;

    // Move j left until element <= pivot
    while (arr[j] > pivot && j >= low + 1)
      j--;

    if (i < j)
      swap(arr[i], arr[j]);
  }

  swap(arr[low], arr[j]); // put pivot in correct position
  return j;
}

void quicksort(int arr[], int low, int high)
{
  if (low < high)
  { // base condition to stop recursion
    int partition_index = partition(arr, low, high);
    quicksort(arr, low, partition_index - 1);
    quicksort(arr, partition_index + 1, high);
  }
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int *arr = new int[n]; // dynamic allocation

  cout << "Enter " << n << " elements:\n";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Before sorting: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  quicksort(arr, 0, n - 1);

  cout << "After sorting: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  delete[] arr; // free memory
  return 0;
}
