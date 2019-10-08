#include <iostream>
#include <thread>
#include <future>
using namespace std;

//求阶乘
int factorial(int n)
{
  int ret = 1;
  for (int i = 2; i <= n; i++)
    ret *= i;
  return ret;
}

/**
 * async ->
 * 异步执行函数
 * 
 * future ->
 * 异步返回值
 * 
 * launch::async 直接创建线程
 * launch::deferred 惰性求值，调用了future的get或者wait时才创建线程。
 * 
 * 采用异步执行器，获取多线程的返回值
 * 
*/

main()
{
  future<int> fu = async(launch::async, factorial, 5);
  int ret = fu.get();
  cout << "result is: " << ret << endl;
}