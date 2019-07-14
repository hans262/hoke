#include <stdio.h>

int main()
{
  //定义枚举类型，同时定义枚举变量
  enum DAY
  {
    MON = 1,
    TUE,
    WED,
    THU,
    FRE,
    SAT,
    SUN
  } day;
  //为枚举变量赋值
  day = SUN;
  printf("%d", day);
  return 0;
}

/**
 * 枚举 ->
 * enum 枚举名 {枚举元素1, 枚举元素2, ...};
 * 
 * 第一个枚举成员的默认值为整型的 0,
 * 后续枚举成员的值在前一个成员上加 1
 * 
 */