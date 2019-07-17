#include <stdio.h>

int main()
{
  char hello[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char hello2[] = "hello";
  printf("%s\n", hello);
  printf("%s\n", hello2);
  return 0;
}