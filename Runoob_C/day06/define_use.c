#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int a = 10; // 定义变量a并赋值
    int b = 20; // 定义变量b并赋值
    int flag;   // 定义变量flag
    flag=FALSE; // 赋值为TRUE
    flag ? printf("a=%d ,b=%d\n\n", a, b) : printf("您选择了FALSE,所以没有东西要打印", b, a); // 条件运算符? :

    return 0;
}