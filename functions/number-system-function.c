#include <stdio.h>
#include <math.h>

int decimal_to_binary(int decimal);
int binary_to_decimal(int binary);
int decimal_to_octal(int decimal);
int octal_to_decimal(int octal);
char* decimal_to_hexadecimal(int number);
int hexadecimal_to_decimal( char hexadecimal[20] );

int main()
{
    int result, option, number;
    char hexa[20];

    printf("What do you want?\n");

    printf("Input a choice - 1, 2, 3, 4, 5, 6, 7, 8, 9, 10:\n1. Decimal to Binary\n2. Decimal to Octal\n3. Decimal to Hexadecimal\n4. Binary to decimal\n5. Binary to Octal\n6. Binary to Hexadecimal\n7. Octal to Decimal\n8. Octal to Binary\n9. Octal to Hexadecimal\n10. Hexadecimal to Decimal\n11. Hexadecimal to Binary\n12. Hexadecimal to Octal\n");
    scanf("%d", &option);

    switch ( option )
    {
        // Decimal to Binary
        case 1:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = decimal_to_binary(number);
            printf("Here is your binary result: %d\n", result);
            break;

        // Decimal to Octal
        case 2:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = decimal_to_octal(number);
            printf("Here is your octal result: %d\n", result);
            break;

        // Decimal to Hexa
        case 3:
            printf("Please enter your number: ");
            scanf("%d", &number);
            char *hexaResult = decimal_to_hexadecimal(number);
            printf( "Here is your hexadecimal result: %s\n", hexaResult );
            break;

        // Binary to Decimal
        case 4:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            printf("Here is your decimal result: %d\n", result);
            break;

        // Binary to Octal
        case 5:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            result = decimal_to_octal(result);
            printf("Here is your octal result: %d\n", result);
            break;

        // Binary to Hexa
        case 6:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = binary_to_decimal(number);
            char *hexaResult3 = decimal_to_hexadecimal(result);
            printf("Here is your hexadecimal number: %s\n", hexaResult3);
            break;

        // Octal to Decimal
        case 7:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = octal_to_decimal(number);
            printf("Here is your decimal result: %d\n", result);
            break;

        // Octal to Binary
        case 8:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = octal_to_decimal(number);
            result = decimal_to_binary(result);
            printf("Here is your binary result: %d\n", result);
            break;

        // Octal to Hexa
        case 9:
            printf("Please enter your number: ");
            scanf("%d", &number);
            result = octal_to_decimal(number);
            char *hexaResult5 = decimal_to_hexadecimal(result);
            printf("Here is your hexadecimal result: %s\n", hexaResult5);
            break;

        // Hexa to Decimal
        case 10:
            printf("Please enter your number: ");
            fseek( stdin, 0, SEEK_END );
            fgets( hexa, sizeof hexa, stdin );
            result = hexadecimal_to_decimal( hexa );
            printf("Here is your decimal result: %d\n", result);
            break;

        // Hexa to Binary
        case 11:
            printf("Please enter your number: ");
            fseek( stdin, 0, SEEK_END );
            fgets( hexa, sizeof hexa, stdin );
            result = hexadecimal_to_decimal( hexa );
            result = decimal_to_binary(result);
            printf("Here is your binary result: %d\n", result);
            break;

        // Hexa to Octal
        case 12:
            printf("Please enter your number: ");
            fseek( stdin, 0, SEEK_END );
            fgets( hexa, sizeof hexa, stdin );
            result = hexadecimal_to_decimal( hexa );
            result = decimal_to_octal(result);
            printf("Here is your octal result: %d\n", result);
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

char * decimal_to_hexadecimal(int decimal)
{
    int remainder, hexadecimalNumber[30], i = 0, t, j;

    char *str = (char *) malloc(30);

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

    int k = 0;
    for( j = i - 1; j >= 0; j-- )
    {
        str[k++] = hexadecimalNumber[j];
    }
    str[k] = '\0';

    return str;
}

int hexadecimal_to_decimal( char hexadecimal[20] )
{
    int decimal = 0, i = 0, j, ch, p = 0;

    i = strlen( hexadecimal );

    for ( j = i - 2; j >= 0; j--){
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
