#include <iostream>
#include <vector>

using namespace std;

/**
 * string
 * 
*/

int main()
{
  string str1 = "hello world";
  cout << str1 << endl;

  //获取长度
  unsigned int len = str1.size();
  cout << len << endl;

  //查找
  int sec = str1.find("o");
  cout << sec << endl;

  //拼接
  str1.append("!");

  cout << str1 << endl;
  return 0;
}