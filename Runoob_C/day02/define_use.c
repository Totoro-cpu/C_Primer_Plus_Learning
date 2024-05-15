#include <stdio.h>
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main() {
    int area;
    area = LENGTH * WIDTH;//计算面积
    printf("The area of the rectangle is %d", area);
    printf("%c",NEWLINE);//换行
    return 0;
}