#include <iostream>
#include <vector>
using namespace std;

/**
 * 指针 ->
 * 
 * &var 取内存地址
 * *p 取地址上的值
 * 
 * 
*/

int main()
{
  int num = 10;
  //赋值指针
  int *p = &num;

  cout << p << endl;
  cout << *p << endl;

  //数组指针
  int arr[3]{5, 6, 7};
  cout << *(arr + 0) << *(arr + 1) << *(arr + 2) << endl;

  //空指针
  int *num2 = NULL;
  cout << num2 << endl;

  return 0;
}