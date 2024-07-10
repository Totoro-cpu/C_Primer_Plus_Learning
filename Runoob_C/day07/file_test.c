#include <stdio.h>
int main()
{ // 创建文件指针并且初始化
    FILE *f = NULL;
    f = fopen("E:/io/test.txt", "w+");
    fprintf(f, "Yes Hello World!...\n");
    fputs("You get it!...\n", f);
    fclose(f);
    printf("This is a succeed!");
    return 0;
}