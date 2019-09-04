#include <iostream>
#include <ctime>
using namespace std;

/**
 * 标准流
 * 
 * 
*/

int main()
{
  char str[] = "hello c++";

  //标准输出流
  cout << str << endl;

  //标准输入流
  char name[50];
  cout << "请输入:";
  cin >> name;
  cout << name << endl;

  //标准错误输出流
  char err[] = "err msg";
  cerr << err << endl;

  
  return 0;
}