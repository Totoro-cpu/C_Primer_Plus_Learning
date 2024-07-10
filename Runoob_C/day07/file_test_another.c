#include <stdio.h>
int main()
{
    FILE *f = NULL;
    f = fopen("E:/io/test.txt", "r");
    char buff[255];
    /*使用该函数将会从文件中读取字符串，但是在遇到第一个空格或者字符串后将会停止读取，
    这里将读到的内容存放入缓冲区buff中*/
    fscanf(f, "%s", buff);
    //打印缓冲区的值
    printf("1.%s\n", buff);
    /*使用该函数读取字符串，在遇到换行符以及EOF会停止读取*/
    fgets(buff, 255, (FILE *)f);
    printf("2.%s\n", buff);
    fgets(buff, 255, (FILE *)f);
    printf("3.%s\n", buff);
}