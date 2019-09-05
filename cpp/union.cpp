#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

/**
 * 共用体 ->
 * 存储不同类型数据
 * 尺寸为最大类型的数据
 * 
 * 同一时间只能给一个成员赋值
 * 多个成员赋值，会损失优先赋值的值
 */

main()
{
  union Data {
    int i;
    float f;
    char str[20];
  };

  union Data data;
  unsigned int len = sizeof(data);
  cout << len << endl;

  data.i = 10;
  cout << "data.i = " << data.i << endl;

  data.f = 3.141592;
  printf("data.f = %f\n", data.f);

  strcpy(data.str, "hello world");
  cout << "data.str = " << data.str << endl;
}