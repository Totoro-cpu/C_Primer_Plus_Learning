
#include <stdio.h>

int main(void)
{
    int feet, fathoms;  // 声明整型变量feet和fathoms

    fathoms = 2;  // 将fathoms赋值为2
    feet = 6 * fathoms;  // 计算feet的值为6乘以fathoms
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);  // 打印结果，显示feet和fathoms的值
    printf("Yes,I said %d feet!\n", 6 * fathoms);  // 打印结果，显示6乘以fathoms的值
}