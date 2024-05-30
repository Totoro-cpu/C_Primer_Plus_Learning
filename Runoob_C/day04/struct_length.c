#include <stdio.h>

// 定义结构体
struct student
{
    char name[20];
    int age;
    char sex;
};

int main()
{
    // 声明结构体变量
    struct student stu;
    // 输出结构体变量的大小
    printf("Size of struct student: %d\n", sizeof(stu));
    return 0;
}