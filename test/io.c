#include <stdio.h>
#include <stdlib.h>
/**
 * 文件读写 ->
 * 
 * fgets 一次读取一行
 * fscanf(fp, "%s", buff); 读取到空格位置
 */
main()
{
  FILE *fp;
  fp = NULL;
  char buff[255];
  //打开
  fp = fopen("./public/a.txt", "a+");
  if (fp == NULL)
  {
    printf("文件打开失败");
    exit(0);
  }
  //写入
  // fprintf(fp, "hello\n");
  // fprintf(fp, "world\n");
  //读取
  while (fgets(buff, 255, fp) != NULL)
  {
    printf("%s", buff);
  }
  fclose(fp);
}