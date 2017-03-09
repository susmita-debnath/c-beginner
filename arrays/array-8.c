#include <stdio.h>

int main()
{
    int y, largeNumber = 0, n, i;

    printf("How many numbers do you want check: ");
    scanf("%d", &n);

    int x[n];

    printf("Please enter the numbers\n");

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0; i < n; i++){
        if(x[i] > largeNumber){
            largeNumber = x[i];
        }
    }

    printf("This is the largest number: %d\n", largeNumber);

    return 0;
}
