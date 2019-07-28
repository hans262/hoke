#include <stdio.h>
/**
 * 指针 ->
 * 含义：保存变量地址的变量。
 * 
 * &符号，取变量的内存地址
 * 
 */
void demo()
{
  //访问变量的地址
  int num;
  printf("%p", &num);
}

void demo2()
{
  int num = 20;
  //申明指针变量
  int *ip;

  //将地址赋值给指针变量
  ip = &num;
  printf("%p\n", ip);

  //使用指针访问其值
  printf("%d\n", *ip);
}
void demo3()
{
  //空指针
  int *ip = NULL;
  //如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯

  if (ip)
  {
    printf("不是空指针");
  }
  else
  {
    printf("空指针 =  %p\n", ip);
  }
}

int main()
{
  int arr[] = {5, 6, 7, 8, 9};
  int i, *p;
  p = &arr[0];

  for (i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d\n", i, *p);
    printf("arr[%d] = %p\n", i, p);
    //位移指针
    p++;
  }
  return 0;
}