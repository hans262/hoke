#include <stdio.h>

/**
 * 指针
 * 每一个变量都有一个内存位置
 * 可使用连字号（&）访问变量的内存地址
 * 
 * 指针含义：
 * 指针是一个变量，其值为另一个变量的地址，内存位置的直接地址。
 * type *var-name;
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
  demo3();
  return 0;
}