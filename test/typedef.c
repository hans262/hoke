#include <stdio.h>
/**
 * 类型别名 -> typedef
 * 自定义一个类型
 */

int main()
{
  typedef struct
  {
    char title[50];
    char author[50];
    char subject[100];
    long long book_id;
  } Book;

  Book book = {
      "C程序语言设计",
      "Brian W. Kernighan",
      "全面、系统地讲述了C语言的各个特性及程序设计的基本方法",
      9787111128069};

  printf("title : %s\n", book.title);
  printf("author: %s\n", book.author);
  printf("subject: %s\n", book.subject);
  printf("book_id: %lld\n", book.book_id);
  return 0;
}