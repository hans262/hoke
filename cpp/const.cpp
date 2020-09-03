#include <iostream>
#include <math.h>
using namespace std;

/**
 * 常量
 * 
 * 常量是固定值，常量的值在定义后不能进行修改。
 * 这些固定的值，又叫做字面量。
 * 常量可以是任何的基本数据类型
 * 定义常量可是使用const关键字
 * 
*/

main()
{
  const double PI = 3.1415926;
  const int RADIUS = 5;
  const char NEWLINE = '\n';
  double area;
  
  area = PI * pow(RADIUS, 2);

  cout << area;
  cout << NEWLINE;
  cout << "done";
}
