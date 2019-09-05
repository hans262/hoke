#include <stdio.h>
/**
 * 打印华氏温度与摄氏温度对照表
 * 摄氏温度 = (5 / 9) * (华氏温度 - 32)
 * 华氏温度 0 ~ 300
 */

#define LOWER 0   /* 温度表的下限 */
#define UPPER 300 /* 温度表上限 */
#define STEP 20   /* 步长 */

main()
{
  float fahr, celsius;
  fahr = LOWER;
  printf("华氏  摄氏\n");
  while (fahr <= UPPER)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += STEP;
  }
}

/**
 * 注：
 * 整数相除将舍弃小数部分
 */