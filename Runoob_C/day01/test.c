#include <stdio.h>
// �����ն�����gcc addtwonum.c test.c -o main
// Ȼ���ڸ�Ŀ¼������./main�ļ�
/*��������ȫ�ֱ���*/
int x = 1;
int y = 2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
    printf("result Ϊ: %d\n", result);
    return 0;
}