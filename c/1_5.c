#include <stdio.h>
/**
 * 统计输入的字符数
 * 统计输入的行数
 * 
 */
main()
{
  int c, nl;
  long nc; /* 字符数 */
  nc = nl = 0;

  while ((c = getchar()) != EOF)
  {
    ++nc;
    putchar(c);
    if (c == '\n')
    {
      ++nl;
      printf("nl = %d\n", nl);
      printf("nc = %ld\n", nc);
    }
  }
}