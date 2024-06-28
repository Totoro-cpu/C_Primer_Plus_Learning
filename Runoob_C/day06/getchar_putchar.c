#include <stdio.h>
int main()
{
    printf("Enter a character: ");
    char c = getchar();
    printf("You entered: %c\n", c);
    putchar(c);
    return 0;
}