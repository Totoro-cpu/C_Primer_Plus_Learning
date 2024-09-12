#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

typedef struct {
    char type[10];  // ��֧���ͣ������֧��
    double amount;  // ���
    char explanation[50];  // ˵��
} Record;

Record records[MAX_RECORDS];
int record_count = 0;
double account = 0;

// ��ӡ�˵�����
void print_menu() {
    printf("------------------��ͥ��֧�������------------------\n");
    printf(" \t\t1 ��֧��ϸ\n");
    printf(" \t\t2 �Ǽ�����\n");
    printf(" \t\t3 �Ǽ�֧��\n");
    printf(" \t\t4 ��    ��\n");
    printf(" \t\t��ѡ��(1-4):");
}

// ��ʾ��ϸ����
void display_assert() {
    printf("------------------��ǰ��֧��ϸ��¼------------------\n");
    printf("��֧\t\t��֧���\t�˻����\t˵��\n");
    for (int i = 0; i < record_count; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%s\n", records[i].type, records[i].amount, account - records[i].amount + (i > 0 ? records[i-1].amount : 0), records[i].explanation);
    }
    printf("�˻��ܽ��: %.2f\n", account);
}

// ����ǼǺ���
void register_income() {
    if (record_count < MAX_RECORDS) {
        double value = 0;
        char explain[50];
        printf("���������");
        if (scanf("%lf", &value) != 1) {
            printf("������Ч�����������ֽ�\n");
            return;
        }
        while (getchar() != '\n');  // ���������
        printf("��������˵����");
        if (scanf("%49s", explain) != 1) {
            printf("������Ч��������˵����\n");
            return;
        }
        while (getchar() != '\n');  // ���������

        strcpy(records[record_count].type, "����");
        records[record_count].amount = value;
        strcpy(records[record_count].explanation, explain);
        record_count++;
        account += value;
    } else {
        printf("��¼�������޷���Ӹ��࣡\n");
    }
}

// ֧���ǼǺ���
void register_cost() {
    if (record_count < MAX_RECORDS) {
        double value = 0;
        char explain[50];
        printf("����֧����");
        if (scanf("%lf", &value) != 1) {
            printf("������Ч�����������ֽ�\n");
            return;
        }
        while (getchar() != '\n');  // ���������
        if (account < value) {
            printf("�˻����㣬�޷���ɱ���֧����\n");
            return;
        }
        printf("����֧��˵����");
        if (scanf("%49s", explain) != 1) {
            printf("������Ч��������˵����\n");
            return;
        }
        while (getchar() != '\n');  // ���������

        strcpy(records[record_count].type, "֧��");
        records[record_count].amount = value;
        strcpy(records[record_count].explanation, explain);
        record_count++;
        account -= value;
    } else {
        printf("��¼�������޷���Ӹ��࣡\n");
    }
}

int main() {
    int loop = 1;
    int flag = 0;

    while (loop) {
        print_menu();
        scanf("%d", &flag);
        while (getchar() != '\n');  // ���������

        if (flag >= 1 && flag <= 4) {
            switch (flag) {
                case 1:
                    display_assert();
                    break;
                case 2:
                    register_income();
                    break;
                case 3:
                    register_cost();
                    break;
                case 4:
                    printf("ϵͳ���˳�\n");
                    loop = 0;
                    break;
                default:
                    printf("��������ȷ����Ϣ��\n");
            }
        } else {
            printf("��������ȷ����Ϣ��\n");
        }
    }

    // �˳�ǰ��ռ�¼���˻����
    record_count = 0;
    account = 0;
    return 0;
}