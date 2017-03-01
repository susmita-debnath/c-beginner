#include <stdio.h>

int main()
{
    int m, z, n;

    printf("Please enter a base number:");
    scanf("%d", &m);

    printf("Please enter times table number:");
    scanf("%d", &n);

    for(z = 1; z <= n; z++){
        printf("%d X %d = %d\n", m, z, m*z);
    }

    return 0;
}
