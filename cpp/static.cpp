#include <iostream>
using namespace std;

/**
 * static
 * 
 * 1.静态局部变量：这种变量的生存期长于该函数。
 * 2.静态全局变量：用于修饰全局变量，表示该变量只在本文件可见。
 * 
*/

/* 声明函数 */
void func(void);

/* 静态全局变量  */
static int count2 = 20;

int main()
{

  func();
  func();
  return 0;
}

void func(void)
{
  /* 静态局部变量 */
  static int count = 10;
  count--;
  cout << count << endl;
}