#include <iostream>
using namespace std;

/**
 * 枚举 ->
 * 第一个成员默认值为0
 * 可以为成员赋值
 * 
 */

main()
{
  enum Size
  {
    S = 2,
    M,
    L,
    X
  };

  enum Size size = X;
  cout << size << endl;
}