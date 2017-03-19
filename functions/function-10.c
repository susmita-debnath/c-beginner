#include <stdio.h>

int main()
{
    int decimal, binaryResult, octalResult;

    printf("Please enter your decimal number: ");
    scanf("%d", &decimal);

    binaryResult = decimal_to_binary(decimal);

    octalResult = decimal_to_octal(decimal);

    printf("Here is your binary result: %d\n", binaryResult);

    printf("Here is your octal result: %d\n", octalResult);

    return 0;
}

int decimal_to_binary(int decimal)
{
    int remainder, binaryResult = 0;
    int i = 1;
    while (decimal != 0){
        remainder = decimal % 2;
        decimal /= 2;
        binaryResult += (remainder * i);
        i *= 10;
    }

    return binaryResult;
}

int decimal_to_octal(int decimal)
{
    int remainder, octalResult = 0, i = 1;

    while (decimal != 0){
        remainder = decimal % 8;
        decimal /= 8;
        octalResult += (remainder * i);
        i *= 10;
    }

    return octalResult;
}
