#include <stdio.h>
#define MAX_SIZE 3
int main()
{
    int a[MAX_SIZE] = {10, 20, 30};
    int *ptr;
    ptr = a;
    while (ptr < &a[MAX_SIZE])
    {
        printf("存储地址为 %p", ptr);
        printf("的值是 %d\n", *ptr);
        ptr++;
    }

    return 0;
}