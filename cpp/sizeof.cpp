#include <iostream>
#include <math.h>
using namespace std;

/**
 * sizeof ->
 * 求变量内存占用的字节数
 * 
 * 求十进制取值范围
 * 2的所占bit位的变化范围 = 2的bit位次幂
 * 2 ** (sizeof(int) * 8)
 */

main()
{
  int min, max;
  int size = sizeof(int);

  size = sizeof(int);
  min = -pow(2, (size * 8 - 1));
  max = abs(min) - 1;

  cout << size << endl;
  cout << min << " ~ " << max << endl;
}