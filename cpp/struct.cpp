#include <iostream>
#include <vector>

using namespace std;

/**
 * 结构体 -> struct
 * 
*/
struct Point
{
  int x;
  int y;
  std::string describe;
  struct Point add(Point p)
  {
    struct Point ret;
    ret.x = this->x + p.x;
    ret.y = this->y + p.y;
    return ret;
  }
};

int main()
{
  struct Point a
  {
    10, 10
  };

  struct Point b
  {
    20, 30
  };

  struct Point c = a.add(b);
  c.describe = "点";

  cout << c.y << endl;

  //结构体指针
  struct Point *p = &c;
  cout << p->describe << endl;

  return 0;
}