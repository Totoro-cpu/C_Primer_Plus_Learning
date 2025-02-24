#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*定义缓冲区大小为20*/
#define MAX 20
int main()
{
    /*定义缓冲区*/
    char dest[MAX];
    /*定义字符串常量用来放入字符数组*/
    const char *src = "Hello World !";
    /**strcpy_s函数用来将src中的字符串拷贝到dest中
       并且进行安全性判断*/
    if (strcpy_s(dest, MAX, src) == 0)
    {
        printf("Copy successful: %s\n", dest);
    }
    else
    {
        printf("Copy failed\n");
    }
    /*定义字符串常量用来追加到字符数组中*/
    const char *appedsrc = "The world is beautiful";
    if (strcat_s(dest, MAX, appedsrc) == 0)
    {
        printf("Concatenation successful: %s\n", dest);
    }
    else
    {
        printf("Concatenation failed\n");
    }
    return 0;
}