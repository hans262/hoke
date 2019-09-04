#include <iostream>
#include <vector>
using namespace std;

/**
 * vector
 * 动态分配的数组
 * 
*/

struct Student
{
  string name;
  int age;
};

int main()
{
  vector<Student> stu;
  stu.push_back({"花花", 18});
  stu.push_back({"狗蛋", 20});

  for (const Student &s : stu)
  {
    cout << s.name << " " << s.age << endl;
  }

  cout << stu.size() << endl;

  return 0;
}