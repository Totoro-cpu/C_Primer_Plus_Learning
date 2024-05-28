#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("地址为%p ", ptr[i]);
        printf("的值为%d \n", *ptr[i]);
    }
}