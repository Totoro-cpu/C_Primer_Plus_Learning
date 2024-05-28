#include <stdio.h>
int main()
{
    // 定义一个指针字符数组
    char *str[3] = {"Hello", "_", "world!"};
    // 输出字符数组
    for (int i = 0; i < 3; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}