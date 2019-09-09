#include <iostream>
#include <vector>
using namespace std;

/**
 * 引用 Reference
 * 
 * 引用必须在创建时被初始化。
 * 不存在空引用。
 * 引用必须连接到一块合法的内存。
 * 一旦引用被初始化就不能再次赋值。
 * 引用不会开辟新的内存空间。
 * 
 * 引用可以减少数值传递过程中的时间
 * 
 * 函数的返回引用也可减少开销
 * 
*/

int main()
{
  int i = 18;

  //创建引用
  int& r = i;
  cout << r << endl;

  //内存地址相同
  cout << &r << endl;
  cout << &i << endl;
  return 0;
}