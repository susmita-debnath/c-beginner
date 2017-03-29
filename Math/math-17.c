#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = ( celsius * 1.8 ) + 32;

    printf("Temperature in farenheit is %lf\n", farenheit);

    return 0;
}
