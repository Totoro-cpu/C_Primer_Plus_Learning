#include <stdio.h>
int main()
{
    // ��������
    int arr[5] = {1, 2, 3, 4, 5};
    // ����ָ������
    int *ptr[5];
    // ��ָ�����鸳ֵ
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    // ���ָ�������ֵ
    for (int i = 0; i < 5; i++)
    {
        printf("��ַΪ%p ", ptr[i]);
        printf("��ֵΪ%d \n", *ptr[i]);
    }
    return 0;
}