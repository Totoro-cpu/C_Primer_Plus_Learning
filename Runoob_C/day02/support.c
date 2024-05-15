#include <stdio.h>
extern int count;
void write_count(void)
{
    printf("count = %d\n", count);
}