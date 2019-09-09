#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * template ->
 * 模板
 * 支持泛型编程
 * 
*/

template <typename T>
inline T const &Max(T const &a, T const &b)
{
  return a > b ? a : b;
}

main()
{
  int i = 39, j = 20;
  cout << Max<int>(i, j) << endl;

  float k = 2.5, m = 2.6;
  cout << Max<float>(k, m) << endl;
}