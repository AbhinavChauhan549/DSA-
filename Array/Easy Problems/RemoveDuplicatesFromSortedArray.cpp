#include <iostream>
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

  cout << "Array after removing duplicates: ";

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
  return 0;
}