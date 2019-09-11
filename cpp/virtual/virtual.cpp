#include <iostream>
using namespace std;

/**
 * interface
 * 虚函数
 * 
 * 定义一个函数为虚函数，不代表函数为不被实现的函数。
 * 定义他为虚函数是为了允许用基类的指针来调用子类的这个函数。
 * 定义一个函数为纯虚函数，才代表函数没有被实现。
 * 
*/

class A
{
public:
  virtual void foo()
  {
    cout << "A: foo" << endl;
  }
};

class B : public A
{
public:
  void foo()
  {
    cout << "B: foo" << endl;
  }
};

main()
{
  A *a = new B();
  a->foo(); // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!

}