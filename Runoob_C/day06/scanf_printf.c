#include <stdio.h>
int main()
{
    char str[100];
    int num = 0;
    printf("please enter your text with following format:\n");
    scanf("%s  %d", str, &num);
    printf("the number is :%d,the string is:%s", num, str);
}