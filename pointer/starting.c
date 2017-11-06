/// Pointer

#include<stdio.h>

int main()
{
    int a;

    int *p;
    p = &a;
    *p = 5;

    printf("%d \t %d\n", a, *p);

    a = 6;

    printf("%d \t %d", a, *p);

    return 0;
}
