#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ���ڽ���������ת��Ϊ������Ƶĺ���
void convertIntegerToBase(long long int num, int base)
{
    if (num == 0)
    {
        printf("0");
        return;
    }
    int digits = 0;
    long long int temp = num;
    while (temp > 0)
    {
        temp /= base;
        digits++;
    }

    char *buffer = (char *)malloc((digits + 1) * sizeof(char)); // ��̬�����ڴ�
    int i = 0;
    while (num > 0)
    {
        buffer[i++] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[num % base]; // ȷ�� base ֵ����Ч��Χ��
        num /= base;
    }
    buffer[i] = '\0'; // ����ַ���������
    // ��ת�ַ���
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", buffer[j]);
    }
    free(buffer); // �ͷŶ�̬������ڴ�
}

// ���ڽ�С������ת��Ϊ������Ƶĺ�����������λС��
void convertFractionToBase(double fraction, int base)
{
    if (fraction == 0)
    {
        printf("000");
        return;
    }
    long long int fractionInt = (long long int)(fraction * 1000);
    for (int i = 0; i < 3; i++)
    {
        printf("%c", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[fractionInt % base]); // ȷ�� base ֵ����Ч��Χ��
        fractionInt /= base;
    }
}

// �����������ڽ�ʵ��ת��Ϊ������Ʋ���ӡ
void printNumberInBase(double num, int base)
{
    if (base < 2 || base > 36)
    {
        printf("Base should be between 2 and 36.\n");
        return;
    }

    if (num < 0)
    {
        printf("-");
        num = -num;
    }

    long long int intPart = (long long int)num;
    double fractionPart = num - intPart;

    convertIntegerToBase(intPart, base);
    printf(".");
    convertFractionToBase(fractionPart, base);
    printf("\n");
}

int main()
{
    double num;
    int base;
    bool validInput = false;
    while (!validInput)
    {
        printf("Enter a number: ");
        if (scanf("%lf", &num) != 1)
        {
            printf("Invalid input. Please enter a valid number.\n");
            // ������뻺����
            while (getchar() != '\n');
            continue;
        }
        validInput = true;

        printf("Enter the base: ");
        if (scanf("%d", &base) != 1 || base < 2 || base > 36)
        {
            printf("Invalid input. Base should be an integer between 2 and 36.\n");
            // ������뻺����
            while (getchar() != '\n');
            validInput = false;
        }
    }

    printNumberInBase(num, base);
    return 0;
}
