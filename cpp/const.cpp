#include <iostream>
#include <vector>

using namespace std;

/**
 * const
 * 常量定义符
 * 无法被再次赋值
 * 
*/

int main()
{

  const int num = 25;

  //num = 26; throw error

  cout << num << endl;

  return 0;
}