#include <stdio.h>
/**
 * 文件读写
 * 
 */

int main()
{
  FILE *fp = NULL;
  char buff[255];

  fp = fopen("./public/a.txt", "r+");
  fscanf(fp, "%s", buff);
  printf("%s\n", buff);
  
  fscanf(fp, "%s", buff);
  printf("%s\n", buff);

  return 0;
}