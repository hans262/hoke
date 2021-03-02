#include <iostream>

/**
 * 统计各个数字、空白符及其他字符次数
 * 空白符：空格 换行符 制表符
 */
using namespace std;

int main()
{
  int ch, nwhite, nother;
  nwhite = nother = 0;
  int ndigits[10];
  //初始化数组
  for (int i = 0; i < 10; i++)
    ndigits[i] = 0;
  while ((ch = getchar()) != 'p')
  {
    //字符与整数比较，将转换成整数再比较
    if (ch == ' ' || ch == '\n' || ch == '\t')
      nwhite += 1;
    else if (ch >= '0' && ch <= '9')
      ndigits[ch - '0'] += 1;
    else
      nother += 1;
  }
  cout << "ndigits = [";
  for (int i = 0; i < 10; i++)
  {
    cout << *(ndigits + i);
  }
  cout << "]\n";
  cout << "nwhite = " << nwhite << endl;
  cout << "nother = " << nother << endl;
  return 0;
}