#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * 文件操作
 * getline方法更加安全
 * 
 * ofstream 写入
 * ifstream 读取
 * fstream  可写/可读
 * 
 * 
*/

main()
{
  string data;

  //写入流
  ofstream writestream;
  writestream.open("./public/b.txt", ios::out | ios::app);
  cout << "Writing to the file" << endl;

  cout << "Enter your name: ";
  getline(cin, data);
  writestream << data << endl;

  cout << "Enter your age: ";
  getline(cin, data);
  writestream << data << endl;

  writestream.close();

  //读取流
  ifstream readstream;
  readstream.open("./public/b.txt", ios::in);
  cout << "Reading from the file" << endl;

  while (getline(readstream, data))
  {
    cout << data << endl;
  }
  readstream.close();
  
}