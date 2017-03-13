#include <stdio.h>

int main()
{
    int x, a;

    printf("Please enter the number:");
    scanf("%d", &a);

    x = factorial(a);
    printf("The factorial of %d is = %d\n", a, x);

    return 0;
}

int factorial(int a)
{
    if( a == 1 )
    {
        return 1;
    }
    int z = 1;
    z = a * factorial( a-1 );

    return z;
}
