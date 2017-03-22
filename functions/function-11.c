#include <stdio.h>
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
    int decimalResult = 0, remainder, i = 0;

    while(binary != 0){
        remainder = binary % 10;
        binary /= 10;

        if ( remainder != 0){
            decimalResult = decimalResult + pow (2, i);
        }
        i++;
    }

    return decimalResult;
}
