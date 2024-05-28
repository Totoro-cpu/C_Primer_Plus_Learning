#include <stdio.h>
int main()
{
    // 声明数组
    int arr[5] = {1, 2, 3, 4, 5};
    // 声明指针数组
    int *ptr[5];
    // 给指针数组赋值
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    // 输出指针数组的值
    for (int i = 0; i < 5; i++)
    {
        printf("地址为%p ", ptr[i]);
        printf("的值为%d \n", *ptr[i]);
    }
    return 0;
}