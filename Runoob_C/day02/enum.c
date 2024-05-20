#include <stdio.h>

enum color
{
    RED,
    GREEN = 7,
    BLUE
};

int main()
{
    enum color c = BLUE;            // 定义变量c为color枚举类型
    printf("The color is %d\n", c); // 输出变量c的值
    enum
    {
        BIG,
        SMALL,
        MEDIUM
    } size; // 定义三个枚举变量
    for (size = 0; size <= MEDIUM; size++)
    {
        printf("The size is %d\n", size);
    }

    return 0;
}