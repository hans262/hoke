#include <iostream>
#include <thread>
using namespace std;

/**
 * thread ->
 * 多线程 基础案例
 * 
 * 任务开启竞争模式，不按顺序执行
 * 
*/

void go()
{
  thread::id id = this_thread::get_id();
  cout << "From: " << id << ", hello" << endl;
}

main()
{
  thread t1(go);
  thread t2(go);

  t1.join();
  t2.join();
}