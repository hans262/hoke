#include <iostream>
using namespace std;

/**
 * array
 * 数组的变量就是一个指针
 * 指向第一个元素
 * 
*/

int main()
{
  int arr[5] = {5, 6, 7, 8, 9};
  int *p = arr;

  for (int i = 0; i < 5; i++)
    cout << *(p + i) << endl;

  return 0;
}