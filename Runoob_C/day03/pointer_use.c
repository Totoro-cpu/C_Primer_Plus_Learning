#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 66;
    int *p;
    p = &num; // ȡ��ַ
    printf("num�ĵ�ַ�ǣ�%p\n", &num);
    printf("p�洢�ĵ�ַ�ǣ�%p\n", p);
    printf("num��ֵ�ǣ�%d\n", num);
    printf("pָ���ֵ�ǣ�%d\n", *p); // ȡֵ
    return 0;
}