#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    switch( n % 2 )
    {
        case 0:
            printf("%d is an even number.\n", n);
            break;
        case 1:
            printf("%d is an odd number.\n", n);
            break;
    }

    return 0;
}
