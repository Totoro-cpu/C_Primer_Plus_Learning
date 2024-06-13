#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main()
{
    Book book;
    strcpy(book.title, "C 语言程序设计");
    strcpy(book.author, "Runoob");
    strcpy(book.subject, "C 语言教程");
    book.book_id = 12345;

    printf("书名: %s\n", book.title);
    printf("作者: %s\n", book.author);
    printf("主题: %s\n", book.subject);
    printf("编号: %d\n", book.book_id);

    return 0;
}