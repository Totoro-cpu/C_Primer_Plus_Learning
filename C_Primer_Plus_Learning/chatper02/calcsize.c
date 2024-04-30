#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("int 存储大小 : %lu \n", sizeof(int));
    printf("short 存储大小 : %lu \n", sizeof(short));
    printf("long 存储大小 : %lu \n", sizeof(long));
    printf("long long 存储大小 : %lu \n", sizeof(long long));
    printf("unsigned int 存储大小 : %lu \n", sizeof(unsigned int));
    printf("unsigned long 存储大小 : %lu \n", sizeof(unsigned long));
    printf("unsigned long long 存储大小 : %lu \n", sizeof(unsigned long long));
    printf("float 存储大小 : %lu \n", sizeof(float));
    printf("double 存储大小 : %lu \n", sizeof(double));
    printf("long double 存储大小 : %lu \n", sizeof(long double));
    printf("char 存储大小 : %lu \n", sizeof(char));
    printf("wchar_t 存储大小 : %lu \n", sizeof(wchar_t));
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
    return 0;
}