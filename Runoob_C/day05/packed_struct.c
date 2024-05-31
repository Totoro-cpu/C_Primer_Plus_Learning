#include <stdio.h>
// 定义一个结构体，其中包含了一些位域
// 位域是一种特殊的数据类型，它允许我们将一个字节中的某些位组合成一个整型变量，从而节省空间。
struct packed_struct
{
    unsigned x1 : 1;
    unsigned x2 : 1;
    unsigned x3 : 1;
    unsigned x4 : 1;
    unsigned type : 4;
    unsigned my_int : 9;
};
int main()
{
    // 定义一个结构体变量
    struct packed_struct my_struct;
    // 给结构体变量赋值
    my_struct.x1 = 1;
    my_struct.x2 = 0;
    my_struct.x3 = 1;
    my_struct.x4 = 0;
    my_struct.type = 15;
    my_struct.my_int = 255;
    // 输出结构体变量的值
    printf("x1 = %u, x2 = %u, x3 = %u, x4 = %u, type = %u, my_int = %u\n", my_struct.x1, my_struct.x2, my_struct.x3, my_struct.x4, my_struct.type, my_struct.my_int);
}