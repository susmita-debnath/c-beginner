#include <math.h>

int main()
{
    int binary, decimalResult;

    printf("Please enter your binary number: ");
    scanf("%d", &binary);

    decimalResult = binary_to_decimal(binary);

    printf("Here is your decimal result: %d\n", decimalResult);

    return 0;
}

int binary_to_decimal(int binary)
{
    int decimalResult = 0, remainder, i = 0, reversedNumber = 0, t, n;

    n = binary;

    while (n != 0){
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    t = reversedNumber;

    while ( t != 0){
        remainder = t % 10;
        printf("%d\n", remainder);
        t /= 10;
    }

    while ( remainder != 0){
        decimalResult = decimalResult + pow (2, i);
        i++;
    }

    return decimalResult;
}
