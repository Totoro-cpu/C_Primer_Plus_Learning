#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int a = 10; // �������a����ֵ
    int b = 20; // �������b����ֵ
    int flag;   // �������flag
    flag=FALSE; // ��ֵΪTRUE
    flag ? printf("a=%d ,b=%d\n\n", a, b) : printf("��ѡ����FALSE,����û�ж���Ҫ��ӡ", b, a); // ���������? :

    return 0;
}