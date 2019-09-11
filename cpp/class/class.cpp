#include <iostream>
using namespace std;

/**
 * 对象
 * 创建对象的三种方式
 * 
*/

class Box
{
public:
  Box()
  {
    cout << "constructor no arg" << endl;
  }
  Box(int id)
  {
    this->id = id;
    cout << "constructor exist arg" << endl;
  }
  void setWidth(int w)
  {
    this->width = w;
  };
  void setHeight(int h)
  {
    this->height = h;
  };
  int getArea()
  {
    return this->width * this->height;
  }

private:
  int id;

protected:
  int width;
  int height;
};

main()
{
  /* 栈上创建对象 */
  Box box;     //执行无参构造
  Box box2();  //无任何意义
  Box box3(3); //执行有参构造

  cout << "--------------------------" << endl;
  /* 堆上创建对象 */
  Box *box4 = new Box;    //执行无参构造
  Box *box5 = new Box();  //执行无参构造
  Box *box6 = new Box(6); //执行有参构造

  /* 销毁堆内存 */
  delete box4;
  delete box5;
  delete box6;
}