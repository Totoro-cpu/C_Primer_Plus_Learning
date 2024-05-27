#include <stdio.h>
#define MAX_SIZE 3 // 定义数组的最大容量
int main()
{ // 定义数组
    int a[MAX_SIZE] = {1, 2, 3};
    // 定义指针
    int *ptr;
    // 指针指向数组的第一个元素
    ptr = a;
    // 遍历数组，并且打印地址值和存储值
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("a[%d]的地址值和存储值为：", i);
        printf("(%p,%d)\n", ptr, *(ptr));
        ptr++;
    }
    return 0;
}