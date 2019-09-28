#include <iostream>
using namespace std;

/**
 * 链表是一种常见的基础数据结构，
 * 是一种线性表，但是并不会按线性的顺序存储数据，
 * 而是在每一个节点里存到下一个节点的指针(Pointer).
*/

struct List
{
  string value;
  List *next;
  //使用构造函数初始化
  List(string x) : value(x), next(nullptr) {}
};

//添加节点
void AddList(List *P)
{
  string value;
  cout << "请输入:";
  cin >> value;
  //连接起来
  P->next = new List(value);
}

//遍历
void each(List *l)
{
  if (!l)
    return;
  cout << l->value << endl;
  each(l->next);
}

main()
{
  List *list = new List("huahua");
  AddList(list);
  AddList(list->next);

  each(list);
}