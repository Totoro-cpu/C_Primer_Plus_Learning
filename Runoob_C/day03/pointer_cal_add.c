#include <stdio.h>
#define MAX_SIZE 3 // ����������������
int main()
{ // ��������
    int a[MAX_SIZE] = {1, 2, 3};
    // ����ָ��
    int *ptr;
    // ָ��ָ������ĵ�һ��Ԫ��
    ptr = a;
    // �������飬���Ҵ�ӡ��ֵַ�ʹ洢ֵ
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("a[%d]�ĵ�ֵַ�ʹ洢ֵΪ��", i);
        printf("(%p,%d)\n", ptr, *(ptr));
        ptr++;
    }
    return 0;
}