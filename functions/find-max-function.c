#include <stdio.h>

int find_max( int ara[11] );

int main()
{
    int ara[11] = { -100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85 };
    int max = find_max(ara);
    printf("%d\n", max);

    return 0;
}

int find_max(int ara[11])
{
    int max = ara[0];
    int i;

    for ( i = 0; i < 11; i++ ){
        if ( ara[i] > max ){
            max = ara[i];
        }
    }

    return max;
}
