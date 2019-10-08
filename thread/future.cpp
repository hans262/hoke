#include <iostream>
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
  return ret;
}

/**
 * promise future
 * 多线程传值 传递引用
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
  
  int ret = fu.get();
  cout << "result is: " << ret << endl;
}