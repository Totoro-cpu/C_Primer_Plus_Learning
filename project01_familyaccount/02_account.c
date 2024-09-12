#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

typedef struct {
    char type[10];  // 收支类型：收入或支出
    double amount;  // 金额
    char explanation[50];  // 说明
} Record;

Record records[MAX_RECORDS];
int record_count = 0;
double account = 0;

// 打印菜单函数
void print_menu() {
    printf("------------------家庭收支记账软件------------------\n");
    printf(" \t\t1 收支明细\n");
    printf(" \t\t2 登记收入\n");
    printf(" \t\t3 登记支出\n");
    printf(" \t\t4 退    出\n");
    printf(" \t\t请选择(1-4):");
}

// 显示明细函数
void display_assert() {
    printf("------------------当前收支明细记录------------------\n");
    printf("收支\t\t收支金额\t账户金额\t说明\n");
    for (int i = 0; i < record_count; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%s\n", records[i].type, records[i].amount, account - records[i].amount + (i > 0 ? records[i-1].amount : 0), records[i].explanation);
    }
    printf("账户总金额: %.2f\n", account);
}

// 收入登记函数
void register_income() {
    if (record_count < MAX_RECORDS) {
        double value = 0;
        char explain[50];
        printf("本次收入金额：");
        if (scanf("%lf", &value) != 1) {
            printf("输入无效，请输入数字金额。\n");
            return;
        }
        while (getchar() != '\n');  // 清除缓冲区
        printf("本次收入说明：");
        if (scanf("%49s", explain) != 1) {
            printf("输入无效，请输入说明。\n");
            return;
        }
        while (getchar() != '\n');  // 清除缓冲区

        strcpy(records[record_count].type, "收入");
        records[record_count].amount = value;
        strcpy(records[record_count].explanation, explain);
        record_count++;
        account += value;
    } else {
        printf("记录已满，无法添加更多！\n");
    }
}

// 支出登记函数
void register_cost() {
    if (record_count < MAX_RECORDS) {
        double value = 0;
        char explain[50];
        printf("本次支出金额：");
        if (scanf("%lf", &value) != 1) {
            printf("输入无效，请输入数字金额。\n");
            return;
        }
        while (getchar() != '\n');  // 清除缓冲区
        if (account < value) {
            printf("账户余额不足，无法完成本次支出！\n");
            return;
        }
        printf("本次支出说明：");
        if (scanf("%49s", explain) != 1) {
            printf("输入无效，请输入说明。\n");
            return;
        }
        while (getchar() != '\n');  // 清除缓冲区

        strcpy(records[record_count].type, "支出");
        records[record_count].amount = value;
        strcpy(records[record_count].explanation, explain);
        record_count++;
        account -= value;
    } else {
        printf("记录已满，无法添加更多！\n");
    }
}

int main() {
    int loop = 1;
    int flag = 0;

    while (loop) {
        print_menu();
        scanf("%d", &flag);
        while (getchar() != '\n');  // 清除缓冲区

        if (flag >= 1 && flag <= 4) {
            switch (flag) {
                case 1:
                    display_assert();
                    break;
                case 2:
                    register_income();
                    break;
                case 3:
                    register_cost();
                    break;
                case 4:
                    printf("系统已退出\n");
                    loop = 0;
                    break;
                default:
                    printf("请输入正确的信息！\n");
            }
        } else {
            printf("请输入正确的信息！\n");
        }
    }

    // 退出前清空记录和账户余额
    record_count = 0;
    account = 0;
    return 0;
}