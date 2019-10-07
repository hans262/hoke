#include <iostream>
#include <stdio.h>
#include <thread>
#include <future>
using namespace std;

//求阶乘
int factorial(int n)
{
  int ret = 1;
  for (int i = 2; i <= n; i++)
    ret *= i;
  cout << "result is: " << ret << endl;
  return ret;
}

/**
 * future
 * 多线程获取值
*/

main()
{
  //传值
  int ret;
  //获取值
  future<int> fu = async(launch::async, factorial, 5);
  ret = fu.get();
  cout << ret << endl;
}