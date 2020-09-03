#include <iostream>
using namespace std;

/**
 * 位域 ->
 * 
 * char = 1字节 int = 4字节
 * 在定义一个变量时，并不需要占用一个完整的字节
 * 而只需几个二进制位的时候，可以使用位域
 * 
 */

main()
{
  struct
  {
    unsigned int age : 3;
    //三个二进制位，取值范围为十进制表示法：0 ~ 2 ** 3 - 1
    // 即 0 ~ 7
  } Tom;

  Tom.age = 7;
  //7的二进制为111
  cout << Tom.age << endl;

  Tom.age = 8;
  //8的二进制为1000，超出三个二进制位空间
  //此时发生内存溢出情况，丢弃首位变成000，即age = 0
  cout << Tom.age << endl;
}