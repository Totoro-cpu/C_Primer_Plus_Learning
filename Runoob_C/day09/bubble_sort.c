#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*定义要排序的数据*/
    int data[] = {5, 3, 2, 4, 6, 9, 7, 8, 5, 1, 10};
    /*获取数组长度*/
    int data_length = sizeof(data);
    /*开始冒泡排序*/
    //bubble_sort();
    /*打印出排序后的数组*/
    printf("%d",data_length);
    for (int i = 0; i < data_length; i++)
    {
        printf("%d ",data);
    }
    
}