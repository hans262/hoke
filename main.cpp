#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
  //动态分配的数组
  vector<string> arr{"Hello", "C++", "World", "from", "VS Code!"};
  arr.push_back("huahua");

  //遍历数组 赋值给word，取word的内存地址
  for (const string &word : arr)
  {
    cout << word << " ";
  }
  cout << endl;

  cout << arr.size() << endl;
  cout << arr[0] << endl;

  struct Info
  {
    int moth;
    int base[5];
  };

  vector<Info> arr2;

  for (int i = 0; i < 12; i++)
  {
    struct Info info = {i + 1, {20, 15, 30, 40, 65}};
    arr2.push_back(info);
  }

  for (const Info &bbw : arr2)
  {
    cout << bbw.base[2] << " ";
  }

  return 0;
}
