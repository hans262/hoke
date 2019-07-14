#include <stdio.h>
#include <malloc.h>
/**
 * 求数组中，两数之和等于给定数字的索引。
 */
int *twoSum(int *nums, int numsSize, int target)
{
  int i, j = 0;
  int *ret = NULL;
  ret = (int *)malloc(sizeof(int) * 2);
  for (i = 0; i < numsSize - 1; i++)
  {
    for (j = i + 1; j < numsSize; j++)
    {
      if (target == *(nums + i) + *(nums + j))
      {
        *ret = i;
        *(ret + 1) = j;
      }
    }
  }
  return ret;
}

int main()
{
  int nums[4] = {2, 7, 11, 15};
  int numsSize = 4;
  int target = 9;
  int *result;
  result = twoSum(nums, numsSize, target);

  printf("%d\n", *result);
  printf("%d\n", *(result + 1));
  return 0;
}