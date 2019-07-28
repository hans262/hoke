#include <stdio.h>
/**
 * 位域 ->
 * 在存储时，并不需要占用一个完整的字节
 * 而只需占几个或一个二进制位
 * 
 */

main()
{
  struct
  {
    unsigned int width;
    unsigned int height;
  } struct_1;
  struct
  {
    unsigned int width : 1;
    unsigned int height : 1;
  } struct_2;

  printf("%d\n", sizeof(struct_1));
  printf("%d\n", sizeof(struct_2));

  struct_2.width = 2;
  printf("struct_2.width = %d\n", struct_2.width);
}