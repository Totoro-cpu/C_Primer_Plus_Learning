#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("int �洢��С : %lu \n", sizeof(int));
    printf("short �洢��С : %lu \n", sizeof(short));
    printf("long �洢��С : %lu \n", sizeof(long));
    printf("long long �洢��С : %lu \n", sizeof(long long));
    printf("unsigned int �洢��С : %lu \n", sizeof(unsigned int));
    printf("unsigned long �洢��С : %lu \n", sizeof(unsigned long));
    printf("unsigned long long �洢��С : %lu \n", sizeof(unsigned long long));
    printf("float �洢��С : %lu \n", sizeof(float));
    printf("double �洢��С : %lu \n", sizeof(double));
    printf("long double �洢��С : %lu \n", sizeof(long double));
    printf("char �洢��С : %lu \n", sizeof(char));
    printf("wchar_t �洢��С : %lu \n", sizeof(wchar_t));
    printf("float �洢����ֽ��� : %lu \n", sizeof(float));
    printf("float ��Сֵ: %E\n", FLT_MIN);
    printf("float ���ֵ: %E\n", FLT_MAX);
    printf("����ֵ: %d\n", FLT_DIG);
    return 0;
}