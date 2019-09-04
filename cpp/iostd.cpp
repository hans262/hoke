#include <iostream>
#include <ctime>
using namespace std;

/**
 * 标准流
 * 
*/

int main()
{
  //标准输入流
  char str[50];
  cout << "请输入:";
  cin >> str;

  //标准输出流
  cout << str << endl;

  //标准错误输出流
  char err[] = "err msg";
  cerr << err << endl;

  char log[] = "log msg";
  //标准日志流
  clog << log << endl;

  return 0;
}