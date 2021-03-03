#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED

#include <iostream>
using namespace std;

template <typename T>
void print(T* p) {
  cout << "[";
  while (*p)
    cout << *(p++) << ", ";
  cout << "]" << endl;
}

#endif