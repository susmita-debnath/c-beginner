#include <stdio.h>

int main()
{
    int number, x;

    printf("Please enter the number: ");
    scanf("%d", &number);

    x = sumLoop(number);
    printf("The sum of the numbers from 1 to %d is %d.\n", number, x);

    return 0;
}

int sum(int number)
{
    int y;

    if(number == 1){
        return 1;
    }

    y = number + sum( number -1 );

    return y;
}

int sumLoop(int number)
{
    int i, sum = 0;

    for(i = number; i >= 1; i--){
        sum = sum + i;
    }

    return sum;
}

