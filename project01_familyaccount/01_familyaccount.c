
#include <stdio.h>
#include <string.h>

// ��ӡ�˵�����
void print_menu()
{
    printf("----------------��ͥ��֧�������----------------\n");
    printf(" \t\t1 ��֧��ϸ\n");
    printf(" \t\t2 �Ǽ�����\n");
    printf(" \t\t3 �Ǽ�֧��\n");
    printf(" \t\t4 ��    ��\n");
    printf(" \t\t��ѡ��(1-4):");
}
// ��ʾ��ϸ����
void display_assert(char *display)
{
    printf("----------------��ǰ��֧��ϸ��¼----------------\n");
    printf("��֧        ��֧���         �˻����        ˵��\n");
    printf("��֧\t\t��֧���         �˻����        ˵��\n");
    printf("%s", display);
}
// ����ǼǺ���
void register_income(double account, char *display)
{
    double value = 0;
    char explain[10];
    printf("���������");
    scanf("%lf", &value);
    printf("��������˵����");
    scanf("%s", &explain);
    
    account += value;
}
// ֧���ǼǺ���
void register_cost(double account, char *display)
{
    printf("֧��");
}
int main()
{
    // ������־����
    int loop = 1;
    // �˻�����ʼ��
    double account = 0;
    // ��ǰ�Ƿ�����֧��ϸ,Ĭ��û�м�¼
    int have = 0;
    // �����־���������ڴ洢�û�ѡ�������
    int flag = 0;
    // ����������ʾ�������ַ���
    char display[4000];
    // �������,�����־λ���ڵ����㣬��ִ��ѭ��
    while (loop)
    {
        // ��ʼ���˵�
        print_menu();
        // �û�����ѡ��
        scanf("%d", &flag);
        if (flag >= 1 && flag <= 4) // ������Ч�Լ��
        {
            switch (flag)
            {
            case 1:
                display_assert(display);
                // ������ʾ��ϸ�����������ʽ�˵��
                if (have == 1)
                {
                    display_assert(display);
                }
                else
                    printf("��ǰû����֧��ϸ����ȥ��һ�ʰɣ�\n");
                break;
            case 2:
                // ���õǼ����뺯������������˵����
                register_income(account, display);
                break;
            case 3:
                // ����֧������(����֧��˵��)
                register_cost(account, display);
                break;
            case 4:
                printf("ϵͳ���˳�\n");
                loop = 0;
            }
        }
        else
            printf("��������ȷ����Ϣ��\n");
    }
    return 0;
}