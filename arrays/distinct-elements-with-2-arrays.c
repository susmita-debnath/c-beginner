#include <stdio.h>
int main()
{
    int n, m, i, max = 0, ara1[100000], ara2[100000], ara3[200000];

    scanf("%d %d", &n, &m);

    for( i = 0; i < n; i++ ){
        scanf("%d", &ara1[i]);
    }

     for( i = 0; i < m; i++ ){
        scanf("%d", &ara2[i]);
    }

    for ( i = 0; i < n; i++ ){
        if ( ara3[ara1[i]] == 1 ){
            ara3[ara1[i]]= 0;
        }
        else {
            ara3[ara1[i]] = 1;
        }
        if ( max < ara1[i] ) { max = ara1[i]; }
    }

    for ( i = 0; i < m; i++ ) {
        if ( ara3[ara2[i]] == 1 ){
            ara3[ara2[i]]= 0;
        }
        else {
            ara3[ara2[i]] = 1;
        }
        if ( max < ara2[i] ) { max = ara2[i]; }
    }

    for ( i = 0; i <= max; i++ ){
        if ( ara3[i] == 1 ){
            printf("%d ", i);
        }
    }

    return 0;
}
