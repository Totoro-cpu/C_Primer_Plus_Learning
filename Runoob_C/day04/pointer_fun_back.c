#include <stdio.h>
#include <stdlib.h>
// 定义一个指针回调函数
void get_rundom_array(int *arr, int size, int (*get_rundom)(void))
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = get_rundom();
    }
    
}

// 定义一个随机数生成的回调函数
int get_rundom(void)
{
    return rand();
}

int main()
{
    int arr[10];
    get_rundom_array(arr, 10, get_rundom);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}