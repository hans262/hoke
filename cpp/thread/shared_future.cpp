#include <iostream>
#include <stdio.h>
#include <thread>
#include <future>
using namespace std;

//求阶乘
int factorial(shared_future<int> f)
{
  int ret = 1;
  int n = f.get();
  for (int i = 2; i <= n; i++)
    ret *= i;
  cout << "result is: " << ret << endl;
  return ret;
}

/**
 * shared_future
 * 多线程传值
*/

main()
{
  //传值
  promise<int> p;
  future<int> f = p.get_future();
  shared_future<int> sf = f.share();

  //获取值
  future<int> fu = async(launch::async, factorial, sf);
  future<int> fu2 = async(launch::async, factorial, sf);
  p.set_value(5);

  cout << fu.get() << endl;
  cout << fu2.get() << endl;
}