#include <stdio.h>
#include <string.h>

struct
{
    unsigned int age : 3;
} Age;

int main()
{
    Age.age = 6;
    printf("Age.age= %d\n", sizeof(Age));
    printf("sizeof(Age)= %d\n", Age.age);

    return 0;
}