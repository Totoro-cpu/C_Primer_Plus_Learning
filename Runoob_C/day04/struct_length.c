#include <stdio.h>

// ����ṹ��
struct student
{
    char name[20];
    int age;
    char sex;
};

int main()
{
    // �����ṹ�����
    struct student stu;
    // ����ṹ������Ĵ�С
    printf("Size of struct student: %d\n", sizeof(stu));
    return 0;
}