#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello,";
    char str3[] = "world!";
    char str4[100];
    int len1, len2, len3;
    // �ַ�������
    strcpy(str4, str1);
    // �ַ�������
    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str3);
    // �ַ���ƴ��
    strcat(str4, str2);
    strcat(str4, str3);
    // �ַ����Ƚ�
    if (strcmp(str2, str1))
        printf("str2 is big to str1\n");
    else
        printf("str2 is small to str1\n");
    // �ַ���λ��
    printf("str1 is at %d\n", strstr(str1, "Hello"));
    printf("H is at %d\n", strchr(str1, 'H'));
    // ����ַ���
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("str4 = %s\n", str4);
    printf("len1 = %d\n", len1);
    printf("len2 = %d\n", len2);
    printf("len3 = %d\n", len3);
    return 0;
}
