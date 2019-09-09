#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * static_assert ->
 * 静态断言
 * 程序编译时报告错误信息
*/
main()
{
  static_assert(sizeof(short) == 2);
  static_assert(sizeof(int) == 4);
  static_assert(sizeof(long) == 4);
  static_assert(sizeof(long long) == 8);
}