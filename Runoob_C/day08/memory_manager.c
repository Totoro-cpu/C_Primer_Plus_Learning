#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    int *pointer;
    int num[MAX]={1,2,3,4,5,6,7,8,9,10};
    pointer = (int *)malloc(100 * sizeof(int));
    if (pointer == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");
        free(pointer);
    }
    for (int i = 0; i < MAX; i++)
    {
        pointer[i] = num[i];
        printf("pointer[%d] = %d\n", i, pointer[i]);
    }
    
}