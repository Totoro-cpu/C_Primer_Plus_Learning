#include <stdio.h>

#define MAXSIZE 3 // ����������������
int main()
{ // ��������
    int a[MAXSIZE] = {1, 2, 3};
    // ����ָ��
    int *ptr;
    // ��ʼ��ָ��Ϊ��������һ��Ԫ��
    ptr = &a[MAXSIZE - 1];
    for (int i = MAXSIZE - 1; i >= 0; i--)
    {
        printf("a[%d]�ĵ�ֵַ�ʹ洢ֵΪ��", i);
        printf("(%p,%d)\n", ptr, *(ptr));
        ptr--; // ָ��ǰһ��Ԫ��
    }
    return 0;
}