#include <stdio.h>
int main()
{
    /* 将整数转化为枚举类型 */
    int num = 1;
    printf("num = %d\n", num);
    enum color
    {
        RED,
        GREEN,
        BLUE
    };
    enum color c;
    c = (enum color)num;
    printf("c = %d\n", c);
    return 0;
}