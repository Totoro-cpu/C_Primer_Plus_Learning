#include <stdio.h>
// �����ⶨ�����a��b
int a;
int b;
// ��������
int addnum()
{ // ��������������a��bΪ�ⲿ����
    extern int a;
    extern int b;
    // ���ⲿ������ȫ�ֱ�������ֵ
    a = 10;
    b = 20;
    return a + b;
}

int main()
{
    int result;
    // ���ú���
    result = addnum();
    // ������
    printf("a��b��ӵĽ��: %d\n", result);
    return 0;
}
