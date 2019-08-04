#include <stdio.h>
#include <time.h>
/**
 * 斐波那契数列 递归测试
 */
unsigned long fibonacci(int num)
{
  if (num > 2)
  {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
  else
  {
    return 1;
  }
}

main()
{
  clock_t start, end;
  unsigned long ret;
  start = clock();
  ret = fibonacci(45);
  end = clock();

  printf("ret = %lu\n", ret);
  printf("time = %ld\n", end - start);
}