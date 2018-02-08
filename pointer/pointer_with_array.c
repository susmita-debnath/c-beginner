/// Pointer with array

#include<stdio.h>
#include <string.h>

int main()
{
    char str[100] = "HSTU";
    char str1[100] = "Dinajpur";
    char *p;

    p = strcpy(str, str1+5);

    printf("%d %d", p, str);

    return 0;
}
