#include <stdio.h>
// 定义函数，计算数组的平均值
double get_average(double *arr, int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    // 定义数组
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    // 计算数组的大小
    int size = sizeof(arr) / sizeof(arr[0]);
    // 调用函数计算平均值
    double avg = get_average(arr, size);
    // 输出结果
    printf("The average is: %f\n", avg);
    return 0;
}