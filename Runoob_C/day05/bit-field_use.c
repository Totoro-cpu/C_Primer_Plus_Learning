#include <stdio.h>
//������ͨ�ṹ
struct
{
    int a1;
    int b2;
} num1;
//����λ��ṹ
struct
{
    int a2 : 1;
    int b2 : 1;
} num2;
int main()
{
    //��ӡ�����ṹ��ռ���ڴ��С
    printf("the size of num1 is %d\n", sizeof(num1));
    printf("the size of num2 is %d\n", sizeof(num2));
    return 0;
}