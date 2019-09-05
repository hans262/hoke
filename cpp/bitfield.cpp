#include <stdio.h>
#include <iostream>
using namespace std;

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
    int width;
    int height;
  } wd;
  struct
  {
    int width : 2;  //占用2个二进制位 -2 ~ 1
    int height : 4; //占用4个二进制位 -8 ~ 7
  } wd2;

  printf("%d\n", sizeof(wd));
  printf("%d\n", sizeof(wd2));

  wd2.height = 7;
  cout << wd2.height << endl;
}