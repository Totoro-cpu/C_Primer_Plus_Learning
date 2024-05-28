#include <stdio.h>
#include <time.h>
// 定义含有指针参数的函数
void get_time(unsigned long *t);
int main()
{
    // 定义一个变量，用来存放秒数
    unsigned long t;
    // 定义一个变量，用于存放当前年月日时间
    time_t now;
    // 获取当前时间戳,并将其存放到变量now中
    now = time(NULL);
    // 调用函数，将当前秒数时间戳存放到变量t中
    get_time(&t);
    // 输出当前时间秒数和当前时间年月日时间
    printf("The time is: %lu\n", t);
    printf("The time is: %s\n", ctime(&now));
    return 0;
}
// 实现含有指针参数的函数
void get_time(unsigned long *t)
{
    // 获取当前时间戳,并将其存放到指针变量now中
    time_t now;
    now = time(NULL);
    *t = (unsigned long)now;
    return;
}