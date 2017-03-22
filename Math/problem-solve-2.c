#include <stdio.h>

int main()
{
    int x, y;

    printf("Total money:");
    scanf("%d", &x);

    printf("How much money have to give:");
    scanf("%d", &y);

    while( y <= x){
        x = x - y;
    }

    printf("Remainder:%d\n", x);

    return 0;
}
