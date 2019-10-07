#include <iostream>
#include <stdio.h>
#include <thread>
#include <future>
#include <mutex>
using namespace std;

class Log
{
private:
  mutex mu;

public:
  void shared_print(thread::id id, int nums)
  {
    unique_lock<mutex> locker(this->mu);
    cout << "From " << id << ": " << nums << endl;
    locker.unlock();
    //lock_guard | unique_lock
    //... 如果其他的代码不需要加锁，可使用unique_lock
  }
};

void run(int &nums, Log &log)
{
  thread::id id = this_thread::get_id();
  while (nums > 0)
  {
    nums--;
    log.shared_print(id, nums);
  }
}

main()
{
  int cpus = thread::hardware_concurrency();
  cout << "cpus: " << cpus << endl;

  Log log;
  int nums = 20;

  thread t1(run, ref(nums), ref(log));
  thread t2(run, ref(nums), ref(log));

  t1.join();
  t2.join();

  cout << "done: " << nums << endl;
}

/**
 * 
 * 向线程传递引用
 * 需要使用ref传递
 * 
 * 互斥对象
 * 可对共用的函数加锁
 * 当一个线程在运行这个函数的时候加锁，运行完了再解锁
 * 
 * 卖票的例子，共享当前票数数据
 * 
 * 
 * 死锁
 * 
*/
