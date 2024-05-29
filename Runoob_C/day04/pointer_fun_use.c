#include <stdio.h>
#include <stdlib.h>
// 定义函数指针求两个数的最大值
int get_max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    // 声明变量
    int a, b, c;
    printf("Enter two numbers: ");
    // 输入三个数
    scanf("%d %d %d", &a, &b, &c);
    // 定义函数指针，并且将函数地址赋值给指针变量
    int (*p)(int, int) = &get_max;
    // 调用该函数指针，并将三个参数传递给该函数指针
    int max = p(p(a, b), c);
    // 输出结果
    printf("The maximum number is: %d\n", max);
    return 0;
}
