#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

  int mid = start + (end - start) / 2;

  int length1 = mid - start + 1;
  int length2 = end - mid;

  int *left = new int[length1];
  int *right = new int[length2];

  int mainIndex = start;

  for (int i = 0; i < length1; i++)
  {
    left[i] = arr[mainIndex++];
  }
  for (int i = 0; i < length2; i++)
  {
    right[i] = arr[mainIndex++];
  }

  mainIndex = start;

  int index1 = 0;
  int index2 = 0;

  while (index1 < length1 && index2 < length2)
  {
    if (left[index1] < right[index2])
    {
      arr[mainIndex++] = left[index1++];
    }
    else
    {
      arr[mainIndex++] = right[index2++];
    }
  }

  while (index1 < length1)
  {
    arr[mainIndex++] = left[index1++];
  }

  while (index2 < length2)
  {
    arr[mainIndex++] = right[index2++];
  }
}
void mergesort(int *arr, int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2;

    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);

    merge(arr, left, right);
  }
}
int main()
{

  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  mergesort(arr, 0, n - 1);
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  delete[] arr;
  return 0;
}