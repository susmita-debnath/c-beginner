/// Pointer closer look

#include<stdio.h>

int main()
{
    int x, y;
    int *p, *q;

    p = &x;
    q = &y;

    x = 5;
    y = 7;



    printf("%d %d %d %d\n", *p, x, *q, y);
    p = q;
    printf("%d %d %d %d\n", *p, x, *q, y);
    x = 12; y = 15;
    printf("%d %d %d %d\n", *p, x, *q, y);

    return 0;
}
