#include <stdio.h>
#include <string.h>
union Data
{
    // 这里的a和b的长度分别为4和13，所以union Data的长度为16
    // 原因是需要在成员变量里面找一个最大的，但是由于需要保持内存对齐
    // 所以需要将a和b对齐为a的长度的整数倍，因为int占4个字节，char本身就是1字节不用考虑对齐
    int a;
    char b[13];
};

int main()
{
    union Data data;
    printf("The length of union Data is %d\n", sizeof(data));
    return 0;
}
