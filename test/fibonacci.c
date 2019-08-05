#include <stdio.h>
#include <time.h>
/**
 * 斐波那契数列 递归测试
 * 40 403ms
 * 45 4400s
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
  int fib = 40;
  clock_t start, end;
  unsigned long ret;
  start = clock();
  ret = fibonacci(fib);
  end = clock();

  printf("fib %d = %lu\n", fib, ret);
  printf("time = %ld\n", end - start);
}