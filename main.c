#include <stdio.h>
#include <time.h>

long long test(int num)
{
  if (num <= 2)
  {
    return 1;
  }
  else
  {
    return test(num - 1) + test(num - 2);
  }
}

main()
{
  clock_t start, end;
  long long ret;
  start = clock();
  ret = test(40);
  end = clock();

  printf("ret = %lld\n", ret);
  printf("time = %ld\n", end - start);
}