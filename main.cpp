#include <iostream>
using namespace std;

int main() {
  // string name = "huahua";
  // cout << "hello world " << name << endl;

  // char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

  // printf("str = %s\n", str);
  // cout << str << endl;


  int a = 10;
  volatile int* p; //永远去拿取新值
  p = &a;

  // volatile int* b;
  // b = &a;

  cout << p << endl;

}