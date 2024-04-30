#include <stdio.h>

// 定义function_1函数，打印多条信息
void function_1()
{
    printf("first name is zhengkang,family name is pu\n");  // 打印第一条信息
    printf("first name is zhengkang,\nfamily name is pu");  // 打印第二条信息
    printf("first name is zhengkang,");  // 打印第三条信息的第一部分
    printf("family name is pu\n");  // 打印第三条信息的第二部分
    printf("my name is puzhengkang,address is Henan!\n");  // 打印个人信息
    printf("%d\n", 24 * 365);  // 打印计算结果
    for (int i = 0; i < 3; i++)  // 使用循环打印信息
    {
        printf("For he's a jolly good fellow!\n");
    }
    printf("Which nobody can deny!\n"); // 打印最后一条信息
}

// 主函数
int main(void)
{
    function_1(); // 调用function_1函数
    return 0;  // 返回0，表示程序正常结束
}