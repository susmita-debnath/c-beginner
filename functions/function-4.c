#include <stdio.h>

int main()
{
    int x, a = 5;

    x = factorial(a);
    printf("%d\n", x);

    return 0;
}

int factorial(int a)
{
    int y = 1, z = 0;
    while (y <= a){
        z = z + y;
        y++;
    }

    return z;
}

