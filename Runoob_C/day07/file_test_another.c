#include <stdio.h>
int main()
{
    FILE *f = NULL;
    f = fopen("E:/io/test.txt", "r");
    char buff[255];
    /*ʹ�øú���������ļ��ж�ȡ�ַ�����������������һ���ո�����ַ����󽫻�ֹͣ��ȡ��
    ���ｫ���������ݴ���뻺����buff��*/
    fscanf(f, "%s", buff);
    //��ӡ��������ֵ
    printf("1.%s\n", buff);
    /*ʹ�øú�����ȡ�ַ��������������з��Լ�EOF��ֹͣ��ȡ*/
    fgets(buff, 255, (FILE *)f);
    printf("2.%s\n", buff);
    fgets(buff, 255, (FILE *)f);
    printf("3.%s\n", buff);
}