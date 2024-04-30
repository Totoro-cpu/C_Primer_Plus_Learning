
#include <stdio.h>

// 定义butler函数
void butler(void);

int main(void)
{
    printf("I will summon the butler fuction.\n"); 
    butler(); // 调用butler函数
    printf("Yes. Bring me some tea and writeable DVDs.\n"); 
    return 0; 
}

// butler函数的实现
void butler(void)
{
    printf("You rang, sir?\n"); 
}