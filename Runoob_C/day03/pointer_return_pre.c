#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// ����������󳤶�
#define MAX_SIZE 10
// ����ָ�����ͺ�����������һ�����������
int *get_rundom()
{
    // ���徲̬�ֲ��������飬�������������
    static int rundom[MAX_SIZE];
    // ���� srand() �������õ�ǰʱ����Ϊ����
    srand((unsigned)time(NULL));
    // ѭ�������������������������
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        rundom[i] = rand();
    }
    // ����������׵�ַ
    return rundom;
}

int main()
{
    // ����ָ�����
    int *p;
    // ���ú�������ȡ�����������׵�ַ
    p = get_rundom();
    // ѭ����������е������
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("The rundom number's address is: %p\n", (p + i));
        printf("The rundom number's value is: %d\n", *(p + i));
    }
    return 0;
}
