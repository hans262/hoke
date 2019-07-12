#include <stdio.h>

/**
 * 整型数据的溢出
 * 16位
 * -32768 ~ 32767
 */
int main()
{
  short a, b;
  a = 32767;
  b = a + 1;
  printf("a = %d, b = %d\n", a, b);
  return 0;
}