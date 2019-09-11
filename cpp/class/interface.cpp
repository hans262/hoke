#include <iostream>
using namespace std;

/**
 * interface
 * 接口(抽象类)
 * 
*/

//基类
class Shape
{
public:
  //抽象方法
  virtual int getArea() = 0;
  void setWidth(int w)
  {
    this->width = w;
  }
  void setHeight(int h)
  {
    this->height = h;
  }

protected:
  int width;
  int height;
};

//派生类
class Rectangle : public Shape
{
public:
  int getArea()
  {
    return this->width * this->height;
  }
};

main()
{
  Rectangle *rect = new Rectangle;

  rect->setHeight(10);
  rect->setWidth(20);
  int area = rect->getArea();
  cout << area << endl;

  delete rect;
}