#include <stdio.h>

int main()
{
    int integer, t, sum = 0, remainder, n, reversedNumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    n = integer;

    while (n != 0){
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    //printf("Reversed Number = %d", reversedNumber);


    t = reversedNumber;

    while (t != 0){
        remainder = t % 10;
        printf("%d\n", remainder);
        t = t / 10;
    }

    return 0;
}
