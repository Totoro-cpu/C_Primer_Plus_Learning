#include <stdio.h>
int count;
extern void write_count();
/*���Ҫ�������������Ҫ��gcc��������main.c�ļ���support.c�ļ���ͬ�������ӳ�һ����ִ���ļ�����ִ�����.exe�ļ�*/
/*��������Ϊ��gcc -o a main.c support.c*/
/*Ȼ������������ִ��a.exe���Ϳ��Կ��������*/
int main()
{
    count = 10;
    write_count();
    return 0;
}