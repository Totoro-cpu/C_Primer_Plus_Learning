#include <stdio.h>
int main()
{
    /* ������ת��Ϊö������ */
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