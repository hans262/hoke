#include <iostream>
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
  return ret;
}

/**
 * shared_future
 * 共享的future
 * 
*/

main()
{
  promise<int> p;
  future<int> f = p.get_future();
  shared_future<int> sf = f.share();

  //获取值
  future<int> fu = async(launch::async, factorial, sf);
  future<int> fu2 = async(launch::async, factorial, sf);
  p.set_value(5);

  cout << "fu result is: " << fu.get() << endl;
  cout << "fu2 result is: " << fu2.get() << endl;
}