#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * namespace ->
 * 命名空间
 * using 指令
 * 
*/

namespace A
{
void func(void)
{
  cout << "namespaceA" << endl;
}
} // namespace A

namespace B
{
void func(void)
{
  cout << "namespaceB" << endl;
}
} // namespace B

using namespace B;

main()
{
  A::func();
  func();
}