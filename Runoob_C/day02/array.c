#include <stdio.h>
// ʹ�ú궨��ķ�ʽ����ȡ����ĳ���
#define ARRAY_LENGTH sizeof(arr) / sizeof(arr[0])
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int sum = 0;
    // ʹ��sizeof()������������ĳ���
    sum = sizeof(arr) / sizeof(arr[0]);
    printf("\nThe size of the array is %d", sum);
    printf("\nThe size of the array is %d", ARRAY_LENGTH);
    return 0;
}