
#include <stdio.h>

// ����butler����
void butler(void);

int main(void)
{
    printf("I will summon the butler fuction.\n"); 
    butler(); // ����butler����
    printf("Yes. Bring me some tea and writeable DVDs.\n"); 
    return 0; 
}

// butler������ʵ��
void butler(void)
{
    printf("You rang, sir?\n"); 
}