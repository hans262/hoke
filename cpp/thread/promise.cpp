#include <iostream>
#include <stdio.h>
#include <thread>
#include <future>
using namespace std;

//求阶乘
int factorial(future<int> &f)
{
  int ret = 1;
  int n = f.get();
  for (int i = 2; i <= n; i++)
    ret *= i;
  cout << "result is: " << ret << endl;
  return ret;
}

/**
 * promise
 * 多线程传值
 * 传递引用
 * 
 * launch::async 在调用async就开始创建线程。
 * 
 * launch::deferred 惰性求值 延迟加载方式创建线程。
 * 调用async时不创建线程，直到调用了future的get或者wait时才创建线程。
 * 
*/

main()
{
  //传值
  promise<int> p;
  future<int> f = p.get_future();
  //获取值
  future<int> fu = async(launch::async, factorial, ref(f));
  p.set_value(5);
  
  cout << fu.get() << endl;
}