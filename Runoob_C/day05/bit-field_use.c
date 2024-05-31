#include <stdio.h>
//定义普通结构
struct
{
    int a1;
    int b2;
} num1;
//定义位域结构
struct
{
    int a2 : 1;
    int b2 : 1;
} num2;
int main()
{
    //打印两个结构所占的内存大小
    printf("the size of num1 is %d\n", sizeof(num1));
    printf("the size of num2 is %d\n", sizeof(num2));
    return 0;
}