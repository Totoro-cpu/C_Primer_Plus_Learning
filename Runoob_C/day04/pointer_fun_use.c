#include <stdio.h>
#include <stdlib.h>
// ���庯��ָ���������������ֵ
int get_max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    // ��������
    int a, b, c;
    printf("Enter two numbers: ");
    // ����������
    scanf("%d %d %d", &a, &b, &c);
    // ���庯��ָ�룬���ҽ�������ַ��ֵ��ָ�����
    int (*p)(int, int) = &get_max;
    // ���øú���ָ�룬���������������ݸ��ú���ָ��
    int max = p(p(a, b), c);
    // ������
    printf("The maximum number is: %d\n", max);
    return 0;
}
