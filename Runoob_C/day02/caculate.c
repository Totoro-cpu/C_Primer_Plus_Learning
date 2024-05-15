#include <stdio.h>

int main()
{
    /*基本运算*/
    int a = 10, b = 20;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    /*自增自减运算*/
    int x;
    int y = 20;
    x = y++;
    printf("x = %d, y = %d\n", x, y);
    x = ++y;
    printf("x = %d, y = %d\n", x, y);
    x = y--;
    printf("x = %d, y = %d\n", x, y);
    x = --y;
    printf("x = %d, y = %d\n", x, y);

    /*关系运算符*/
    int c = 10, d = 20;
    printf("c > d = %d\n", c > d);
    printf("c < d = %d\n", c < d);
    printf("c >= d = %d\n", c >= d);
    printf("c <= d = %d\n", c <= d);
    printf("c == d = %d\n", c == d);
    printf("c!= d = %d\n", c != d);

    /*逻辑运算符*/
    int e = 10, f = 20;
    printf("e && f = %d\n", e && f);
    printf("e || f = %d\n", e || f);
    printf("!e = %d\n", !e);
    printf("!f = %d\n", !f);

    /*位运算符*/
    int g = 10, h = 20;
    printf("g & h = %d\n", g & h);
    printf("g | h = %d\n", g | h);
    printf("g ^ h = %d\n", g ^ h);
    printf("~g = %d\n", ~g);
    printf("g << 2 = %d\n", g << 2);
    printf("g >> 2 = %d\n", g >> 2);

    /*赋值运算符*/
    int i = 10, j = 20;
    i += j;
    printf("i = %d\n", i);
    i -= j;
    printf("i = %d\n", i);
    i *= j;
    printf("i = %d\n", i);
    i /= j;
    printf("i = %d\n", i);
    i %= j;
    printf("i = %d\n", i);
    i &= j;
    printf("i = %d\n", i);
    i |= j;
    printf("i = %d\n", i);
    i ^= j;
    printf("i = %d\n", i);
    i <<= 2;
    printf("i = %d\n", i);
    i >>= 2;
    printf("i = %d\n", i);

    /*条件运算符*/
    int k = 10, l = 20, m = 30;
    int n = (k > l) ? m : k;
    printf("n = %d\n", n);

    return 0;
}