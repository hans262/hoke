#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/**
 * 文件和流
 *
 * ofstream 文件写入流
 * ifstream 文件读取流
 * fstream  可写/可读
 *
 * cin  标准输入流stdin
 * cout 标准输出流stdout
 * getline 从一个流中读取一行数据
 *
 */

int main() {
  string name, age;

  //写入流
  ofstream writestream;
  writestream.open("./public/a.txt", ios::out | ios::app);
  cout << "Writing to the file" << endl;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  getline(cin, age);

  writestream << name << "-" << age << endl;
  writestream.close();

  string data;
  //读取流
  ifstream readstream;
  readstream.open("./public/a.txt", ios::in);
  cout << "Reading from the file" << endl;

  while (getline(readstream, data)) {
    cout << data << endl;
  }
  readstream.close();
}