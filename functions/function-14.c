#include <stdio.h>

int main()
{
    int number, i, j, k;

    printf("Please enter a number: ");
    scanf("%d", &number);

    for ( i = 1; i <= number; i += 2){
        for ( k = ( number - i ) / 2; k >= 1 ; k--){
            printf("\t");
        }
            for ( j = 0; j < i; j++){
                printf("*\t");
            }

        printf("\n");
    }

    for ( i = number - 2; i >= 1; i = i - 2){
        for ( k = 1; k <= ( number - i) / 2; k++){
            printf("\t");
        }
        for ( j = i; j > 0; j--){
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}

