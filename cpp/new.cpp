#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * new ->
 * 动态内存
 * 
 * 数组分配
 * new int[5];
 * delete [] int;
 * 
 * 对象分配
 * new ClassName
 * 
*/

main()
{
  //初始化空指针
  int* num = NULL;

  //为变量请求内存
  num = new int;

  //在分配的地址存储值
  *num = 20;

  cout << *num << endl;

  //释放内存
  delete num;

  cout << *num << endl;

}