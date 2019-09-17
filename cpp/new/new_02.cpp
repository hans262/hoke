#include <iostream>
using namespace std;

/**
 * 数值的动态分配
*/
main()
{
  int *arr = new int[2];
  arr[0] = 10;
  arr[1] = 20;

  cout << *arr << endl;
  cout << *(arr + 1) << endl;

  delete[] arr;
}