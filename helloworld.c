#include <stdio.h>
#include <math.h>

/**
 * 取值范围
 * 
 * int 4字节 
 * 每个字节8位
 * 4个字节32位
 * 2的32次方的变化范围
 * 
 * 2 的(字节 * 8)次方
 * 
 */

int main()
{
  int intSize;
  long long intX, intY;

  intSize = sizeof(int);
  intX = -pow(2, intSize * 8) / 2;
  intY = abs(intX) - 1;

  printf("intSize = %d\n", intSize);
  printf("intRange = %lld ~ %lld\n", intX, intY);
  
  return 0;
}