#include <stdio.h>

int main()
{
    int x = 10, y = 20, z;

    z = y;
    y = x;
    x = z;


    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
