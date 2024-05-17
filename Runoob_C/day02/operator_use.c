#include <stdio.h>
#include <stdlib.h>
void three_operator();
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
    three_operator();
    return 0;
}
void three_operator()
{
    int a = 10;
    int b = 20;
    int c = (a > b) ? printf("a > b\n") : printf("a <= b\n");
}
