#include <stdio.h>

int main()
{
    int number;

    printf("Please enter your number between 1 to 7: ");
    scanf("%d", &number);

    /*if(number == 1){
        printf("Today is Saturday.");
    }
    else if(number == 2){
        printf("Today is Sunday.");
    }
    else if(number == 3){
        printf("Today is Monday.");
    }
    else if(number == 4){
        printf("Today is Tuesday.");
    }
    else if(number == 5){
        printf("Today is Wednesday.");
    }
    else if(number == 6){
        printf("Today is Thursday.");
    }
    else if(number == 7){
        printf("Today is Friday.");
    }
    else{
        printf("Invalid Number");
    }*/

    switch( number )
    {
        case 1:
            printf("Today is Saturday.");
            break;

        case 2:
            printf("Today is Sprintf("Invalid Number");unday.");
            break;

        case 3:
            printf("Today is Monday.");
            break;

        case 4:
            printf("Today is Tuesday.");
            break;

        case 5:
            printf("Today is Wednesday.");
            break;

        case 6:
            printf("Today is Thursday.");
            break;

        case 7
            printf("Today is Friday.");
            break;

        default:
            printf("Invalid Number");
    }

    return 0;
}
