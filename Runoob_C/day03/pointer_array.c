#include <stdio.h>
// ���庯�������������ƽ��ֵ
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
    // ��������
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    // ��������Ĵ�С
    int size = sizeof(arr) / sizeof(arr[0]);
    // ���ú�������ƽ��ֵ
    double avg = get_average(arr, size);
    // ������
    printf("The average is: %f\n", avg);
    return 0;
}