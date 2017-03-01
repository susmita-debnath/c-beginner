#include <stdio.h>

int main()
{
    int  i, z, m, n = 37;
    printf( "Please enter a number:" );
    scanf("%d", &m);

    for( i = 11; i <= 20; i++ ){
        z = n*i;
        if(z > m){
            break;

        }
        printf("%d X %d = %d\n", n, i, z);
    }

    return 0;
}
