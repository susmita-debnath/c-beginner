///Two Dimensional Array ( Matrix Multiplication )

/**
    A = 1   2
        3   4

    B = 5   6
        7   8

    A*B = C = 19  22
              43  50

    c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    c[1][1] = a[1][0]*b[1][0] + a[1][1]*b[1][1];

*/

#include <stdio.h>

int main()
{
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {5,6,7,8};
    int c[2][2], i , j, k , sum;
    int m,n,p;
    m = n = p = 2;

    printf("Matrix A\n");
    for(i=0; i<m; i++){
        for(j=0; j<p; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatrix B\n");
    for(i=0; i<p; i++){
        for(j=0; j<n; j++) {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    /**
    A = 1   2
        3   4

    B = 5   6
        7   8

     A*B = C = 19  22
              43  50

    c[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
    c[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    c[1][1] = a[1][0]*b[1][0] + a[1][1]*b[1][1];

    */

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++){
                sum = 0;
            for(k=0; k<p ; k++){
                sum = sum +a[i][k]*b[k][j];
            }
            c[i][j] = sum ;
        }
    }

   printf("\n\nMatrix C\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++) {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }


    return 0;

}
