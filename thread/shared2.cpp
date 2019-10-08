#include <iostream>
#include <thread>
#include <future>
#include <mutex>
using namespace std;

class Task
{
private:
  mutex mu;

public:
  void shared_print(thread::id id, int nums)
  {
    unique_lock<mutex> locker(this->mu);
    cout << "From " << id << ": " << nums << endl;
    locker.unlock();
  }
  void run(int &nums)
  {
    thread::id id = this_thread::get_id();
    while (nums > 0)
    {
      nums--;
      shared_print(id, nums);
    }
  }
};

main()
{
  int cpus = thread::hardware_concurrency();
  cout << "cpus: " << cpus << endl;

  Task task;
  int nums = 20;

  //共用一个类，每个线程实现自己的run方法
  thread t1(&Task::run, &task, ref(nums));
  thread t2(&Task::run, &task, ref(nums));

  t1.join();
  t2.join();

  cout << "done: " << nums << endl;
}
