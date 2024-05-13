#include <stdio.h>
// 函数外定义变量a和b
int a;
int b;
// 函数定义
int addnum()
{ // 函数内声明变量a和b为外部变量
    extern int a;
    extern int b;
    // 给外部变量（全局变量）赋值
    a = 10;
    b = 20;
    return a + b;
}

int main()
{
    int result;
    // 调用函数
    result = addnum();
    // 输出结果
    printf("a和b相加的结果: %d\n", result);
    return 0;
}
