#include <stdio.h>
int main()
{
    // �������
    int a = 10;
    // ����ָ�����
    int *p = &a;
    // ����ָ��ָ���ָ�����
    int **q = &p;
    // ���������ָ�������ֵ
    printf("a�ĵ�ַ = %p\n", &a);
    printf("a��ֵ = %d\n", a);
    printf("p�ĵ�ַ = %p\n", p);
    printf("p��ֵ = %d\n", *p);
    printf("q�ĵ�ַ = %p\n", q);
    printf("q��ֵ= %d\n", **q);
    return 0;
}