#include <iostream>
#include <ctime>
using namespace std;

/**
 * ctime
 * 
*/

int main()
{
  //当前时间
  time_t now = time(0);
  cout << now << endl;

  //转字符串，本地时间
  char *dt = ctime(&now);
  cout << dt << endl;

  //转UTC时间
  tm *gtm = gmtime(&now);
  dt = asctime(gtm);
  cout << gtm->tm_sec << endl;
  
  return 0;
}