#include <stdio.h>
// ����һ���ṹ�壬���а�����һЩλ��
// λ����һ��������������ͣ����������ǽ�һ���ֽ��е�ĳЩλ��ϳ�һ�����ͱ������Ӷ���ʡ�ռ䡣
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
    // ����һ���ṹ�����
    struct packed_struct my_struct;
    // ���ṹ�������ֵ
    my_struct.x1 = 1;
    my_struct.x2 = 0;
    my_struct.x3 = 1;
    my_struct.x4 = 0;
    my_struct.type = 15;
    my_struct.my_int = 255;
    // ����ṹ�������ֵ
    printf("x1 = %u, x2 = %u, x3 = %u, x4 = %u, type = %u, my_int = %u\n", my_struct.x1, my_struct.x2, my_struct.x3, my_struct.x4, my_struct.type, my_struct.my_int);
}