#include <stdio.h>
/* 定义函数 func */
void func(void);
/* 定义全局静态变量 a 作为计数器*/
static int a = 10;
int main()
{ /* 主函数 使用静态变量 a作为判断条件 然后调用 func 函数 */
    while (a--)
    {
        func();
    }
    return 0;
}
/* 实现函数 func */
void func(void)
{ /* 静态局部变量 b 作为另外一个计数器*/
    static int b = 5;
    printf("a = %d, b = %d\n", a, b);
    b++;
};