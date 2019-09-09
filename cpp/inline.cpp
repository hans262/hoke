#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * inline ->
 * 内联函数
 * 
 * 引入内联函数的目的是为了解决程序中函数调用的效率问题
 * 程序在编译器编译的时候，编译器将程序中出现的内联函数的调用表达式用内联函数的函数体进行替换
 * 所以内联函数一般都是1-5行的小函数
 * 在使用内联函数时要留神
 * 使用必须非常小心
 * 
*/

inline int Max(int x, int y)
{
  return (x > y) ? x : y;
}

main()
{
  int i = 39, j = 20;
  cout << Max(i, j) << endl;
}