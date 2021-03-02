#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
  string name;
  string age;
  string stuNumber;
};

vector<Student> getAllStudent()
{
  string data;
  vector<Student> student;
  //查询学生数据
  ifstream readstream;
  readstream.open("./public/b.txt", ios::in);
  while (getline(readstream, data))
  {
    string line = data;
    string s[3];
    int index, len, id = 0;
    while ((index = line.find("-")) != string::npos)
    {
      string result;
      len = line.length();
      result = line.substr(0, index);
      s[id++] = result;
      line = line.substr(index + 1, len - 1);
    }
    Student stu;
    stu.name = s[0];
    stu.age = s[1];
    stu.stuNumber = s[2];
    student.push_back(stu);
  }
  readstream.close();
  return student;
}

void printmenu()
{
  cout << "1.录入学生信息（姓名、年龄）" << endl;
  cout << "2.显示学生信息" << endl;
  cout << "3.修改学生信息（根据学号修改）" << endl;
  cout << "5.退出" << endl;
}

//录入
void add()
{
  string name, age, stuNumber;
  //学号规则，自增，永不相同
  //获取最后一个学号 自增

  vector<Student> student = getAllStudent();
  string lastNumber = student[student.size() - 1].stuNumber;
  stuNumber = to_string(stoi(lastNumber, 0, 10) + 1);
  cout << stuNumber << endl;

  //录入数据
  cout << "Enter name: ";
  getline(cin, name);
  cout << "Enter age: ";
  getline(cin, age);

  //写入文件
  ofstream writestream;
  writestream.open("./public/b.txt", ios::out | ios::app);
  writestream << name << "-" << age << "-" << stuNumber << "-" << endl;
  writestream.close();
  cout << "Enter done!" << endl;
}
//修改
void update()
{
  string id, name, age;
  cout << "请要修改输入学号: ";
  getline(cin, id);
  //判断学号是否存在
  vector<Student> student = getAllStudent();
  //获取所有学号
  bool isExist = false;
  for (const Student &s : student)
  {
    if (s.stuNumber == id)
    {
      isExist = true;
    }
  }

  if (isExist)
  {
    cout << "学号存在，可以修改" << endl;
    //重新组建集合 然后写入文件

    //录入修改
    cout << "请输入名字: ";
    getline(cin, name);
    cout << "Enter age: ";
    getline(cin, age);

    for (Student &s : student)
    {
      if (s.stuNumber == id)
      {
        s.age = age;
        s.name = name;
      }
    }
    //从新写入文件
    //写入文件
    ofstream writestream;
    writestream.open("./public/b.txt", ios::out);
    // writestream << name << "-" << age << "-" << stuNumber << "-" << endl;
    for (const Student &s : student)
    {
      writestream << s.name << "-" << s.age << "-" << s.stuNumber << "-" << endl;
    }
    writestream.close();
    cout << "修改成功!" << endl;
  }
  else
  {
    cout << "学号不存在，不能修改" << endl;
  }
}

void showAll()
{
  vector<Student> student = getAllStudent();
  cout << "====学生数据====" << endl;
  for (const Student &s : student)
  {
    cout << s.name << "-" << s.age << "-" << s.stuNumber << endl;
  }
}

int main()
{
  printmenu();
  string data;

  while (getline(cin, data))
  {
    if (data == "1")
    {
      add();
    }
    else if (data == "2")
    {
      showAll();
    }
    else if (data == "3")
    {
      update();
    }
    else if (data == "5")
    {
      cout << "exit" << endl;
      return 0;
    }
    else
    {
      printmenu();
    }
  }
}