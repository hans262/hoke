#include <iostream>
using namespace std;

/**
 * array
 * 数组
*/

int main()
{
  int arr[5] = {5, 6, 7, 8, 9};

  //遍历
  for (const int &i : arr)
    cout << i << " ";
  cout << endl;

  //求长度
  int len = sizeof(arr) / sizeof(*arr);
  cout << len << endl;

  return 0;
}