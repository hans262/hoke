#include <stdio.h>

/**
 * 打印华氏与摄氏温度对照表
 * 摄氏 = (5 / 9) * (华氏 - 32)
 * 华氏 =  0 ~ tep20 ～ 300
 */

#define LOWER 0     //华氏下限
#define UPPER 300   //华氏上限
#define STEP 20     //步长

int main()
{
  float fahr, celsius;
  fahr = LOWER;
  printf("华氏  摄氏\n");
  while (fahr <= UPPER)
  {
    //整数相除将舍弃小数部分5/9 = 0，故这里转浮点数
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    //%3.0f 占三个字符宽小数部分取0位
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += STEP;
  }
  return 0;
}