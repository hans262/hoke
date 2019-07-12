#include <stdio.h>

void twoSum(int *nums, int numsSize, int target)
{
  int i, j;
  int result[2] = {0};
  for (i = 0; i < numsSize; i++)
  {
    for (j = i + 1; j < numsSize; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        result[0] = i;
        result[1] = j;
      }
    }
  }
  printf("result[0] = %d\n", result[0]);
  printf("result[1] = %d\n", result[1]);
}

int main()
{
  int nums[4] = {2, 7, 11, 15};
  int numsSize, target;
  numsSize = 4;
  target = 9;
  twoSum(nums, numsSize, target);
  return 0;
}