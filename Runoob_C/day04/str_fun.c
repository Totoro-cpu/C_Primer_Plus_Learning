#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello,";
    char str3[] = "world!";
    char str4[100];
    int len1, len2, len3;
    // ×Ö·û´®¸´ÖÆ
    strcpy(str4, str1);
    // ×Ö·û´®³¤¶È
    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str3);
    // ×Ö·û´®Æ´½Ó
    strcat(str4, str2);
    strcat(str4, str3);
    // ×Ö·û´®±È½Ï
    if (strcmp(str2, str1))
        printf("str2 is big to str1\n");
    else
        printf("str2 is small to str1\n");
    // ×Ö·û´®Î»ÖÃ
    printf("str1 is at %d\n", strstr(str1, "Hello"));
    printf("H is at %d\n", strchr(str1, 'H'));
    // Êä³ö×Ö·û´®
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    printf("str4 = %s\n", str4);
    printf("len1 = %d\n", len1);
    printf("len2 = %d\n", len2);
    printf("len3 = %d\n", len3);
    return 0;
}
