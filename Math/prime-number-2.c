#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, i, j, k = 0;

    bool is_prime = true;

    number = 7;

    //printf("Please enter your number: ");
    //scanf("%d", &number);

    /*for ( i = 3; i <= number; i++){
        for ( j = 2; j < i; j++){
            if ( i % j != 0){
                k++;
            }
        }
    }*/


    for ( i = 2; i < number; i++ ){
        if (( number % i) == 0 ){
            printf("%d is not a prime number.", number);
            return 0;
        }
    }

    printf("%d is a prime number.", number);


    //printf("There are %d prime numbers.\n", k);

    return 0;
}
