#include <iostream>
#include <map>
using namespace std;

main()
{
  map<string, string> m;

  m["01"] = "huahua";
  m["02"] = "goudan";

  cout << m["01"] << endl;
}