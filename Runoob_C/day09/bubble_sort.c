#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*����Ҫ���������*/
    int data[] = {5, 3, 2, 4, 6, 9, 7, 8, 5, 1, 10};
    /*��ȡ���鳤��*/
    int data_length = sizeof(data);
    /*��ʼð������*/
    //bubble_sort();
    /*��ӡ������������*/
    printf("%d",data_length);
    for (int i = 0; i < data_length; i++)
    {
        printf("%d ",data);
    }
    
}