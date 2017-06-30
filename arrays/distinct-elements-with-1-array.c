#include<stdio.h>

int main()
{
    int i, x, s1, s2;
    int max = 0;
    int A[100000];

    scanf("%d %d", &s1, &s2);

    for ( i = 0; i < s1+s2; i++ ){
        scanf("%d", &x);

        if ( A[x] == 1 ){
           A[x] = 0;
        }
        else {
            A[x] = 1;
        }
        if ( max < x ) { max = x; }
    }

    for ( i = 0; i <= max; i++ ){
        if ( A[i] == 1 ){
            printf("%d ", i);
        }
    }

    return 0;
}
