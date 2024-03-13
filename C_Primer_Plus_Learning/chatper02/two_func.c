// two_func.c--一个文件中包含两个函数
#include <stdio.h>
// ANSI/ISO C 函数原型
void butler(void);
int main(void)
{
    printf("I will summon the butler fuction.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}
// 函数定义开始
void butler(void)
{
    printf("You rang, sir?\n");
}