
#include <stdio.h>
#include <string.h>

// 打印菜单函数
void print_menu()
{
    printf("----------------家庭收支记账软件----------------\n");
    printf(" \t\t1 收支明细\n");
    printf(" \t\t2 登记收入\n");
    printf(" \t\t3 登记支出\n");
    printf(" \t\t4 退    出\n");
    printf(" \t\t请选择(1-4):");
}
// 显示明细函数
void display_assert(char *display)
{
    printf("----------------当前收支明细记录----------------\n");
    printf("收支        收支金额         账户金额        说明\n");
    printf("收支\t\t收支金额         账户金额        说明\n");
    printf("%s", display);
}
// 收入登记函数
void register_income(double account, char *display)
{
    double value = 0;
    char explain[10];
    printf("本次收入金额：");
    scanf("%lf", &value);
    printf("本次收入说明：");
    scanf("%s", &explain);
    
    account += value;
}
// 支出登记函数
void register_cost(double account, char *display)
{
    printf("支出");
}
int main()
{
    // 声明标志变量
    int loop = 1;
    // 账户金额初始化
    double account = 0;
    // 当前是否有收支明细,默认没有记录
    int have = 0;
    // 定义标志变量，用于存储用户选择的数字
    int flag = 0;
    // 定义用来显示出来的字符串
    char display[4000];
    // 搭建整体框架,如果标志位大于等于零，则执行循环
    while (loop)
    {
        // 初始化菜单
        print_menu();
        // 用户输入选项
        scanf("%d", &flag);
        if (flag >= 1 && flag <= 4) // 输入有效性检测
        {
            switch (flag)
            {
            case 1:
                display_assert(display);
                // 调用显示明细函数，包括资金说明
                if (have == 1)
                {
                    display_assert(display);
                }
                else
                    printf("当前没有收支明细，快去来一笔吧！\n");
                break;
            case 2:
                // 调用登记收入函数（包括收入说明）
                register_income(account, display);
                break;
            case 3:
                // 调用支出函数(包括支出说明)
                register_cost(account, display);
                break;
            case 4:
                printf("系统已退出\n");
                loop = 0;
            }
        }
        else
            printf("请输入正确的信息！\n");
    }
    return 0;
}