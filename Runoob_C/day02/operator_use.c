#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a = 10;
    float b = 5;
    double c = 3.14;
    int *p;
    p = &a;
    printf("%d\n", sizeof(a));
    printf("%p\n", &b);
    printf("%p\n", *p);
    printf("%d\n", *p);
    return 0;
}
