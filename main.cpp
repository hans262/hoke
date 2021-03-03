#include <iostream>
using namespace std;

int main() {
  string name = "huahua";
  cout << "hello world " << name << endl;

  char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

  printf("str = %s\n", str);
  cout << str << endl;
}