#include <stdio.h>

void printBinary(unsigned int n);

int main()
{
    unsigned int num = 10;
    printf("The binary representation of %d is: ", num);
    printBinary(num);
    return 0;
}

void printBinary(unsigned int n)
{
    if (n > 0) {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}
   