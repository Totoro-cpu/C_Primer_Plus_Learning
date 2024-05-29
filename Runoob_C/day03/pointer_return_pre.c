#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 定义数组最大长度
#define MAX_SIZE 10
// 定义指针类型函数用来返回一个随机数数组
int *get_rundom()
{
    // 定义静态局部变量数组，用来接收随机数
    static int rundom[MAX_SIZE];
    // 调用 srand() 函数，用当前时间作为种子
    srand((unsigned)time(NULL));
    // 循环生成随机数，并存入数组中
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        rundom[i] = rand();
    }
    // 返回数组的首地址
    return rundom;
}

int main()
{
    // 定义指针变量
    int *p;
    // 调用函数，获取随机数数组的首地址
    p = get_rundom();
    // 循环输出数组中的随机数
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("The rundom number's address is: %p\n", (p + i));
        printf("The rundom number's value is: %d\n", *(p + i));
    }
    return 0;
}
