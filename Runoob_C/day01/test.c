#include <stdio.h>
// 请在终端运行gcc addtwonum.c test.c -o main
// 然后在该目录下运行./main文件
/*定义两个全局变量*/
int x = 1;
int y = 2;
int addtwonum();
int main(void)
{
    int result;
    result = addtwonum();
    printf("result 为: %d\n", result);
    return 0;
}