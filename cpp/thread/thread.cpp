#include <iostream>
#include <stdio.h>
#include <thread>

using namespace std;
/**
 * thread ->
 * 多线程
 * 任务开启竞争模式，不按顺序执行
 * 
*/

void go(void)
{
  for (int i = 0; i < 3; i++)
  {
    cout << "hello " << i << endl;
  }
}

main()
{
  thread t1(go);
  thread t2(go);

  t1.join();
  t2.join();
}