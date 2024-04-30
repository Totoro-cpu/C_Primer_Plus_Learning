// two_func.c--一个文件中包含两个函数
#include <stdio.h>

// ANSI/ISO C 函数原型
void butler(void); // 函数原型声明

int main(void)
{
    printf("I will summon the butler fuction.\n"); // 打印信息
    butler(); // 调用butler函数
    printf("Yes. Bring me some tea and writeable DVDs.\n"); // 打印信息
    return 0; // 返回0表示程序正常结束
}

// 函数定义开始
void butler(void)
{
    printf("You rang, sir?\n"); // 打印信息
}