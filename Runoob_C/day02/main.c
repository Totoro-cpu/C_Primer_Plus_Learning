#include <stdio.h>
int count;
extern void write_count();
/*如果要运行这个程序，需要用gcc编译器将main.c文件和support.c文件共同编译链接成一个可执行文件，再执行这个.exe文件*/
/*具体命令为：gcc -o a main.c support.c*/
/*然后在命令行中执行a.exe，就可以看到输出了*/
int main()
{
    count = 10;
    write_count();
    return 0;
}