#include <stdio.h>

int main()
{
    int remainder, decimal, hexadecimalNumber[100], i = 0, t, j;

    printf("Please enter your decimal number: ");
    scanf("%d", &decimal);

    t = decimal;

    while ( t != 0){
        remainder = t % 16;

        if ( remainder < 10){
            remainder = remainder + 48;
        }
        else {
            remainder = remainder + 55;
        }

        hexadecimalNumber[i++] = remainder;
        t /= 16;
    }

    for( j = i - 1; j >= 0; j-- )
    {
        printf( "%c", hexadecimalNumber[j] );
    }

    return 0;
}
