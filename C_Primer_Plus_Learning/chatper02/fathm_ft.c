
#include <stdio.h>

int main(void)
{
    int feet, fathoms;  // �������ͱ���feet��fathoms

    fathoms = 2;  // ��fathoms��ֵΪ2
    feet = 6 * fathoms;  // ����feet��ֵΪ6����fathoms
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);  // ��ӡ�������ʾfeet��fathoms��ֵ
    printf("Yes,I said %d feet!\n", 6 * fathoms);  // ��ӡ�������ʾ6����fathoms��ֵ
}