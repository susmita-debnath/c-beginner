#include <stdio.h>

int main()
{
    int integer, t, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    t = integer;

    while (t != 0){
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
    }

    printf("Sum of digits of %d = %d\n", integer, sum);

    return 0;
}
