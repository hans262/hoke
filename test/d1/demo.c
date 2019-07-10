#include <stdio.h>
/**
 * 不同整型的量可以参与运算
 * 并互相赋值，其中的类型转换是由编译系统自动完成的
 */
int main()
{
  long x, y;
  int a, b, c, d;
  x = 5;
  y = 6;
  a = 7;
  b = 8;
  c = x + a;
  d = y + b;
  printf("c = %d, d = %d\n", c, d);
  return 0;
}