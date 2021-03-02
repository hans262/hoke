#include <stdio.h>

/**
 * 打印ascii对照表
 */

int main()
{
  int ch;
  printf("ASCII\n");
  // getchar => 当前字符的十进制对照表，可查看ascii对照表。
  while ((ch = getchar()))
  {
    switch (ch)
    {
    case 10:
      printf("回车 = %d\n", ch);
      break;
    case 32:
      printf("空格 = %d\n", ch);
      break;
    //输入字符0退出程序
    case 48:
      return 0;
    default:
      //以字符的形式输出十进制数
      printf("%c = %d\n", ch, ch);
      break;
    }
  }
}