#include <stdio.h>

int main()
{
  int num;
  printf("请输入一个数字：");
  scanf("%d", &num); //这里的&作用是取变量的地址
  (num % 2 == 0) ? printf("偶数") : printf("奇数");
  return 0;
}