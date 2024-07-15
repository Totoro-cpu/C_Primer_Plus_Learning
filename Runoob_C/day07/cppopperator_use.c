#include <stdio.h>
// 宏延续运算符（\）字符串常量化运算符(#）
#define messagefor(a, b) \
    printf(#a " and " #b ":We love u!\n")
int main()
{
    messagefor(Mike, Jene);
    return 0;
}