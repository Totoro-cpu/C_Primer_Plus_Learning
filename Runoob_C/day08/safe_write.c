#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*���建������СΪ20*/
#define MAX 20
int main()
{
    /*���建����*/
    char dest[MAX];
    /*�����ַ����������������ַ�����*/
    const char *src = "Hello World !";
    /**strcpy_s����������src�е��ַ���������dest��
       ���ҽ��а�ȫ���ж�*/
    if (strcpy_s(dest, MAX, src) == 0)
    {
        printf("Copy successful: %s\n", dest);
    }
    else
    {
        printf("Copy failed\n");
    }
    /*�����ַ�����������׷�ӵ��ַ�������*/
    const char *appedsrc = "The world is beautiful";
    if (strcat_s(dest, MAX, appedsrc) == 0)
    {
        printf("Concatenation successful: %s\n", dest);
    }
    else
    {
        printf("Concatenation failed\n");
    }
    return 0;
}