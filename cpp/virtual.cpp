#include <iostream>
using namespace std;

/**
 * virtual
 * 虚函数
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
  a->foo();
}