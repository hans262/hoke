#include <iostream>
using namespace std;

/**
 * virtual
 * 纯虚函数
 * 
 * 派生类中必须予以重写以实现多态性
 * 含有纯虚拟函数的类称为抽象类，它不能生成对象。
 * 
*/

class A
{
public:
  virtual void foo() = 0;
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