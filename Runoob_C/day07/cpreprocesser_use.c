#include <stdio.h>
int main()
{
    printf("FILE:%s\n", __FILE__);
    printf("DATE:%s\n", __DATE__);
    printf("TIME:%s\n", __TIME__);
    printf("LINE:%d\n", __LINE__);
    printf("STDC:%d\n", __STDC__);
    return 0;
}