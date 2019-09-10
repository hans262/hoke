#include <iostream>
using namespace std;

/**
 * 继承
 * 
*/

class Shape
{
public:
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
  //动态创建内存
  Rectangle *Rect = new Rectangle();

  Rect->setWidth(20);
  Rect->setHeight(10);

  int area = Rect->getArea();

  cout << area << endl;

  //释放内存
  delete Rect;
}