#include <stdio.h>

int main()
{
    /*��������*/
    int a = 10, b = 20;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    /*�����Լ�����*/
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

    /*��ϵ�����*/
    int c = 10, d = 20;
    printf("c > d = %d\n", c > d);
    printf("c < d = %d\n", c < d);
    printf("c >= d = %d\n", c >= d);
    printf("c <= d = %d\n", c <= d);
    printf("c == d = %d\n", c == d);
    printf("c!= d = %d\n", c != d);

    /*�߼������*/
    int e = 10, f = 20;
    printf("e && f = %d\n", e && f);
    printf("e || f = %d\n", e || f);
    printf("!e = %d\n", !e);
    printf("!f = %d\n", !f);

    /*λ�����*/
    int g = 10, h = 20;
    printf("g & h = %d\n", g & h);
    printf("g | h = %d\n", g | h);
    printf("g ^ h = %d\n", g ^ h);
    printf("~g = %d\n", ~g);
    printf("g << 2 = %d\n", g << 2);
    printf("g >> 2 = %d\n", g >> 2);

    /*��ֵ�����*/
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

    /*���������*/
    int k = 10, l = 20, m = 30;
    int n = (k > l) ? m : k;
    printf("n = %d\n", n);

    return 0;
}