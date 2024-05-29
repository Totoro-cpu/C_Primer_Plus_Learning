#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义结构体
struct books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main()
{
    // 声明结构体变量
    struct books book1;
    struct books book2;
    // 给结构体变量赋值
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Runoob");
    strcpy(book1.subject, "C语言");
    book1.book_id = 101;

    strcpy(book2.title, "Python Programming");
    strcpy(book2.author, "Runoob");
    strcpy(book2.subject, "Python语言");
    book2.book_id = 102;
    // 输出结构体变量内容
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    printf("Book 2 title : %s\n", book2.title);
    printf("Book 2 author : %s\n", book2.author);
    printf("Book 2 subject : %s\n", book2.subject);
    printf("Book 2 book_id : %d\n", book2.book_id);

    return 0;
}