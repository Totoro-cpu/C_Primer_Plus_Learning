#include <stdio.h>

int main()
{
    enum color
    {
        RED = 1,
        GREEN,
        BLUE
    };
    enum color c;
    /*�����û�ϲ������ɫ*/

    printf("Enter your favorite color (1-Red, 2-Green, 3-Blue): ");
    scanf("%d", &c);

    switch (c)
    {
    case RED:
        printf("You like the color red.\n");
        break;
    case GREEN:
        printf("You like the color green.\n");
        break;
    case BLUE:
        printf("You like the color blue.\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}
