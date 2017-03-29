#include <stdio.h>
#include <stdbool.h>

bool is_prime_number( int number );

int main()
{

    int number;

    printf("Please enter your number: ");
    scanf("%d", &number);

    bool is_prime = is_prime_number( number );

    if ( is_prime == true){
        printf("%d is a prime number.", number);
    }
    else {
        printf("%d is not a prime number.", number);
    }

    return 0;
}

bool is_prime_number( int number ) {

    int i;

    bool is_prime = true;

    for ( i = 2; i < number; i++ ){
        if (( number % i) == 0 ){
            is_prime = false;
            break;
        }
    }

    return is_prime;



    /*if ( is_prime == true){
        printf("%d is a prime number.", number);
    }
    else {
        printf("%d is not a prime number.", number);
    }*/

}
