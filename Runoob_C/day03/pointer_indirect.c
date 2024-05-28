#include <stdio.h>
int main()
{
    // 定义变量
    int a = 10;
    // 定义指针变量
    int *p = &a;
    // 定义指向指针的指针变量
    int **q = &p;
    // 输出变量和指针变量的值
    printf("a的地址 = %p\n", &a);
    printf("a的值 = %d\n", a);
    printf("p的地址 = %p\n", p);
    printf("p的值 = %d\n", *p);
    printf("q的地址 = %p\n", q);
    printf("q的值= %d\n", **q);
    return 0;
}