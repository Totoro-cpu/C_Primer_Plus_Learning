#include <stdio.h>

// ����function_1��������ӡ������Ϣ
void function_1()
{
    printf("first name is zhengkang,family name is pu\n");  // ��ӡ��һ����Ϣ
    printf("first name is zhengkang,\nfamily name is pu");  // ��ӡ�ڶ�����Ϣ
    printf("first name is zhengkang,");  // ��ӡ��������Ϣ�ĵ�һ����
    printf("family name is pu\n");  // ��ӡ��������Ϣ�ĵڶ�����
    printf("my name is puzhengkang,address is Henan!\n");  // ��ӡ������Ϣ
    printf("%d\n", 24 * 365);  // ��ӡ������
    for (int i = 0; i < 3; i++)  // ʹ��ѭ����ӡ��Ϣ
    {
        printf("For he's a jolly good fellow!\n");
    }
    printf("Which nobody can deny!\n"); // ��ӡ���һ����Ϣ
}

// ������
int main(void)
{
    function_1(); // ����function_1����
    return 0;  // ����0����ʾ������������
}