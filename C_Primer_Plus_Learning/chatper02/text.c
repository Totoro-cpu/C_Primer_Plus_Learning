#include <stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;
    printf("a=%d,b=%d\n", a, b);
}