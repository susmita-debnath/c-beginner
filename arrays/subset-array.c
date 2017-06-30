#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Please enter the number:");
    scanf("%d", &n);

    int ara[n];

    for ( i = 0; i < n; i++ ){
        scanf("%d", &ara[i]);
    }

    for ( i = 0; i < n; i++ ){
        printf("%d\n", ara[i]);
    }

    for ( i = 0; i < n; i++ ){
        for ( j = 1; j < n; j++ ){
            if ( ara[i] == ara[j] ){
                continue;
            }
            printf("%d, %d\n", ara[i], ara[j]);
        }
    }

    return 0;
}
