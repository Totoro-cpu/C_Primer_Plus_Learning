#include <stdio.h>

enum color
{
    RED,
    GREEN = 7,
    BLUE
};

int main()
{
    enum color c = BLUE;            // �������cΪcolorö������
    printf("The color is %d\n", c); // �������c��ֵ
    enum
    {
        BIG,
        SMALL,
        MEDIUM
    } size; // ��������ö�ٱ���
    for (size = 0; size <= MEDIUM; size++)
    {
        printf("The size is %d\n", size);
    }

    return 0;
}