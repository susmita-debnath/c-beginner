#include <stdio.h>

int main()
{
    int x, i;

    printf("Please enter a number: ");
    scanf("%d", &x);

    int y = 1;
    for(i = x; i >= 1; i--){
        //y = y * i;
        y *= i;
    }

    printf("This is the result:%d\n", y);

    return 0;
}
