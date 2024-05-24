#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *q = NULL;
    int num = 66;
    int *p;
    p = &num; // 取地址
    printf("num的地址是：%p\n", &num);
    printf("p存储的地址是：%p\n", p);
    printf("num的值是：%d\n", num);
    printf("p指向的值是：%d\n", *p);
    printf("q的值是：%p\n", q); // 取值
    return 0;
}