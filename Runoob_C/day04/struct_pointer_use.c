#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义结构体
struct student
{
    char name[20];
    int age;
    char sex[5];
};
// 定义函数
void print_student(struct student *p)
{
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Sex: %s\n", p->sex);
}
int main()
{
    // 定义结构体变量
    struct student student1;
    struct student student2;
    // 输入数据
    printf("Enter student1's name, age, and sex: ");
    scanf("%19s %d %s", student1.name, &student1.age, &student1.sex);
    printf("Enter student2's name, age, and sex: ");
    scanf("%19s %d %s", student2.name, &student2.age, &student2.sex);
    // 输出数据
    print_student(&student1);
    print_student(&student2);
    return 0;
}
