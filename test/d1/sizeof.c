#include <stdio.h>
#include <math.h>

/**
 * 取值范围
 * int 4字节 
 * 每个字节8位
 * 4个字节32位
 * 2的32次方的变化范围
 * 
 */

int main()
{
  int intSize;
  int intMin, intMax;

  intSize = sizeof(int);
  intMin = -pow(2, intSize * 8) / 2;
  intMax = abs(intMin) - 1;
  printf("intByteSize = %d\n", intSize);
  printf("intRange = %d ~ %d\n", intMin, intMax);

  return 0;
}