#include <stdio.h>
/* ���庯�� func */
void func(void);
/* ����ȫ�־�̬���� a ��Ϊ������*/
static int a = 10;
int main()
{ /* ������ ʹ�þ�̬���� a��Ϊ�ж����� Ȼ����� func ���� */
    while (a--)
    {
        func();
    }
    return 0;
}
/* ʵ�ֺ��� func */
void func(void)
{ /* ��̬�ֲ����� b ��Ϊ����һ��������*/
    static int b = 5;
    printf("a = %d, b = %d\n", a, b);
    b++;
};