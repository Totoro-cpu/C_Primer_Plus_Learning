#include <stdio.h>

#define MAXSIZE 3 // 定义数组的最大容量
int main()
{ // 定义数组
    int a[MAXSIZE] = {1, 2, 3};
    // 定义指针
    int *ptr;
    // 初始化指针为数组的最后一个元素
    ptr = &a[MAXSIZE - 1];
    for (int i = MAXSIZE - 1; i >= 0; i--)
    {
        printf("a[%d]的地址值和存储值为：", i);
        printf("(%p,%d)\n", ptr, *(ptr));
        ptr--; // 指向前一个元素
    }
    return 0;
}