#include <stdio.h>

/**
 * 数组
 * 
 * 申明
 * type arrayName [ len ];
 * 
 * 初始化
 * int arr[5] = {5,6,7,8,9};
 * int arr[] = {5,6,7,8,9};
 * 
 * 长度 = 总的字节数 / 一个位置的字节数
 * 
 */

int main()
{
  int arr[] = {5, 6, 7, 8, 9};
  int *p;
  int i;
  // p = arr;
  p = &arr[0];
  for (i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d\n", i, *(p + i));
  }
  return 0;
}

void demo()
{
  int arr[] = {5, 6, 7, 8, 9};
  int len;
  len = sizeof(arr) / sizeof(arr[0]);
  printf("len = %d", len);

  int len2;
  int arr2[2][3] = {
      {1, 2, 3},
      {4, 5, 6}};
  len2 = sizeof(arr2) / sizeof(arr2[0]);
  printf("len = %d", len2);
}