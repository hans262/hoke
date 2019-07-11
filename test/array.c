#include <stdio.h>
/**
 * 数组
 */

void array()
{
  int nums[10];
  int i, j;

  for (i = 0; i < 10; i++)
  {
    nums[i] = i + 100;
  }

  for (j = 0; j < 10; j++)
  {
    printf("nums[%d] = %d\n", j, nums[j]);
  }
}
void array2()
{
  int nums[5] = {5, 6, 7, 8, 9};
  int i, j;

  for (j = 0; j < 5; j++)
  {
    printf("nums[%d] = %d\n", j, nums[j]);
  }
}

int main()
{
  array2();
  return 0;
}