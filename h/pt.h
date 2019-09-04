#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
#include <iostream>
using namespace std;

void print_array(int *p)
{
  cout << "[";
  while (*p)
    cout << *(p++) << ", ";
  cout << "]" << endl;
}

#endif