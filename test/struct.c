#include <stdio.h>
/**
 * struct -> 结构体
 * 用来存储键值对的数据类型
 * 
 */
int main()
{
  //定义Book结构体类型
  struct Book
  {
    char title[50];
    char author[50];
    char subject[100];
    long long book_id;
  };
  //声明book变量
  struct Book book = {
      "C程序语言设计",
      "Brian W. Kernighan",
      "全面、系统地讲述了C语言的各个特性及程序设计的基本方法",
      9787111128069};
  //普通获取
  printf("title : %s\n", book.title);
  printf("author: %s\n", book.author);
  printf("subject: %s\n", book.subject);
  printf("book_id: %lld\n", book.book_id);
  printf("-------------------\n");
  
  //指针获取
  struct Book *book_p;
  book_p = &book;
  printf("title : %s\n", book_p->title);
  printf("author: %s\n", book_p->author);
  printf("subject: %s\n", book_p->subject);
  printf("book_id: %lld\n", book_p->book_id);
  return 0;
}