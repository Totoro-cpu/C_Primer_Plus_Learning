#include <stdio.h>
// �������������\���ַ��������������(#��
#define messagefor(a, b) \
    printf(#a " and " #b ":We love u!\n")
int main()
{
    messagefor(Mike, Jene);
    return 0;
}