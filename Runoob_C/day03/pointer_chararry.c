#include <stdio.h>
int main()
{
    // ����һ��ָ���ַ�����
    char *str[3] = {"Hello", "_", "world!"};
    // ����ַ�����
    for (int i = 0; i < 3; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}