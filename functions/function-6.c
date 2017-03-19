#include <stdio.h>

int main()
{
    double x, y, z, k;

    printf("Enter temperature in fahrenheight:");
    scanf("%lf", &x);

    y = (x - 32) / 1.8;

    printf("Temperature in celsius:%lf\n", y);

    printf("Enter temperature in celsius:");
    scanf("%lf", &z);

    k = (z * 1.8) + 32;

    printf("Temperature in fahrenheight:%lf\n", k);

    return 0;
}
