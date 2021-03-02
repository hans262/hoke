#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/**
 * fstream  可写/可读
 * getline 从一个流中读取一行数据
 *
 */

int main() {
  string data;
  fstream iofs;
  iofs.open("./public/a.txt", ios::out | ios::app);
  iofs << "hello world!" << endl;
  iofs.close();
  iofs.open("./public/a.txt", ios::in);
  while (getline(iofs, data)) {
    cout << data << endl;
  }
  iofs.close();
}