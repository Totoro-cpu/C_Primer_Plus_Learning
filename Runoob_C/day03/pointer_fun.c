#include <stdio.h>
#include <time.h>
// ���庬��ָ������ĺ���
void get_time(unsigned long *t);
int main()
{
    // ����һ�������������������
    unsigned long t;
    // ����һ�����������ڴ�ŵ�ǰ������ʱ��
    time_t now;
    // ��ȡ��ǰʱ���,�������ŵ�����now��
    now = time(NULL);
    // ���ú���������ǰ����ʱ�����ŵ�����t��
    get_time(&t);
    // �����ǰʱ�������͵�ǰʱ��������ʱ��
    printf("The time is: %lu\n", t);
    printf("The time is: %s\n", ctime(&now));
    return 0;
}
// ʵ�ֺ���ָ������ĺ���
void get_time(unsigned long *t)
{
    // ��ȡ��ǰʱ���,�������ŵ�ָ�����now��
    time_t now;
    now = time(NULL);
    *t = (unsigned long)now;
    return;
}