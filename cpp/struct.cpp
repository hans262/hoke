#include <iostream>
#include <vector>
using namespace std;

/**
 * struct ->
 * 结构体
 * 
 * typedef ->
 * 类型别名
 * 
*/

typedef struct Point
{
  int x;
  int y;
  std::string describe;
  Point add(Point p)
  {
    Point ret;
    ret.x = this->x + p.x;
    ret.y = this->y + p.y;
    return ret;
  }
};

int main()
{
  Point a{10, 10};
  Point b{20, 30};

  Point c = a.add(b);
  c.describe = "点";

  cout << c.y << endl;

  //结构体指针
  Point *p = &c;
  cout << p->describe << endl;

  return 0;
}