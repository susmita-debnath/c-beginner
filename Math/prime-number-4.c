#include <stdio.h>
#include <stdbool.h>

bool is_prime_number( int number );

int main()
{

    int number, count = 0, i;
    bool is_prime;

    printf("Please enter your number: ");
    scanf("%d", &number);

    for( i = 1; i <= number; i += 2 ){

        //if( i % 2 != 0 || i == 2 ) {
            is_prime = is_prime_number( i );

            if( is_prime == true ) {
                count++;
            }
        //}

    }

    printf("There are %d prime numbers between 1 and %d", count + 1, number);

    return 0;
}

bool is_prime_number( int number ) {

    switch( number ) {
        case 1:
        case 2:
        case 3:
            return true;
            break;

        case 0:
            return false;
            break;
    }

    /*if( number == 0 ) return false;
    if( number == 1 ) return true;
    if( number == 2 ) return true;
    if( number == 3 ) return true;*/

    int i;

    bool is_prime = true;

    for ( i = 2; i < number; i++ ){
        if (( number % i) == 0 ){
            is_prime = false;
            break;
        }
    }

    return is_prime;

}
