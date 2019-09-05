#include <iostream>
#include <math.h>
using namespace std;

/**
 * sizeof ->
 * 求变量内存大小
 * 
 * 取值范围
 * 2的 所占bit位次方 的变化范围
 * 
 */

int main()
{
  int min, max;
  int size = sizeof(int);

  size = sizeof(int);
  min = -pow(2, (size * 8 - 1));
  max = abs(min) - 1;

  cout << size << endl;
  cout << min << " ~ " << max << endl;

  return 0;
}