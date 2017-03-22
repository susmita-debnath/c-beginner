#include <stdio.h>
#include <math.h>

int main()
{
    int result, option, number;

    printf("What do you want?\n");

    printf("Input a choice - 1, 2, 3,4, 5, 6, 7, 8, 9, 10:\n1. decimal to binary\n2. decimal to octal\n3. binary to decimal\n4. octal to decimal\n5. binary to octal\n6. octal to binary\n7. decimal to hexadecimal\n8. hexadecimal to decimal\n9. hexadecimal to binary\n10. binary to hexadecimal\n");
    scanf("%d", &option);

    switch ( option )
    {
        case 1:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = decimal_to_binary(number);
            printf("Here is your binary result: %d\n", result);
            break;

        case 2:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = decimal_to_octal(number);
            printf("Here is your octal result: %d\n", result);
            break;

        case 3:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            printf("Here is your decimal result: %d\n", result);
            break;

        case 4:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = octal_to_decimal(number);
            printf("Here is your decimal result: %d\n", result);
            break;

        case 5:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            result = decimal_to_octal(result);
            printf("Here is your decimal result: %d\n", result);
            break;

        case 6:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = octal_to_decimal(number);
            result = decimal_to_binary(result);
            printf("Here is your binary result: %d\n", result);
            break;

        case 7:
            printf("Please enter your number: ");
            scanf("%d", &number);
            decimal_to_hexadecimal(number);
            break;

        case 8:
            printf("Please enter your number: ");
            fseek( stdin, 0, SEEK_END );
            result = hexadecimal_to_decimal();
            printf("Here is your decimal result: %d\n", result);
            break;

        case 9:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = hexadecimal_to_decimal();
            result = decimal_to_binary(result);
            printf("Here is your binary result: %d\n", result);
            break;

        case 10:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            result = decimal_to_hexadecimal(number);
            printf("Here is your hexadecimal number: %d\n", result);
            break;

        default:
            printf("Invalid Number.");
    }

    return 0;
}

int decimal_to_binary(int decimal)
{
    int remainder, binaryResult = 0, i = 1;

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

int octal_to_decimal(int octal)
{
    int octalResult = 0, remainder , i = 0;

    while ( octal != 0){
        remainder = octal % 10;
        octal /= 10;

        if ( remainder != 10){
            octalResult = octalResult + ( remainder * pow( 8, i));
        }

        i++;
    }

    return octalResult;
}

int decimal_to_hexadecimal(int decimal)
{
    int remainder, hexadecimalNumber[100], i = 0, t, j;

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

    printf( "Here is your hexadecimal number: " );
    for( j = i - 1; j >= 0; j-- )
    {
        printf( "%c", hexadecimalNumber[j] );
    }

    return 0;
}

int hexadecimal_to_decimal()
{
    int hexadecimal[20], decimal = 0, i = 0, j, ch, p = 0;

    while (( ch = getchar()) != '\n'  ){
        if (( ch > 47 && ch < 58) || ( ch > 64 && ch < 71)){
            hexadecimal[i++] = ch;
        }
    }

    for ( j = i - 1; j >= 0; j--){
        if ( hexadecimal[j] > 57){
            decimal += (hexadecimal[j] - 55) * pow(16, p);
        }
        else{
            decimal += (hexadecimal[j] - 48) * pow(16, p);
        }

        p++;
    }

    return decimal;
}
