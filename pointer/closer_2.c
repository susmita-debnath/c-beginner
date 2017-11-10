/// Pointer closer look

#include<stdio.h>

int main()
{
    int a = 5, *p = &a;

    printf("%d %d %d\n", a, *p, p);
    (*p)++;
    printf("%d %d %d\n", a, *p, p);

    return 0;
}
