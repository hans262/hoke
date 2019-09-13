#include <iostream>
using namespace std;

main()
{
  int nums[] = {1, 2, 3};
  int *p= nums;

  cout << p << endl;
  cout << ++p << endl;
}