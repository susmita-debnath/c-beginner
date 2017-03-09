#include <stdio.h>

int main()
{
    int y, z, j = 0, k;

    printf("Please enter a number:");
    scanf("%d", &y);

    int x[y];

    for(z = 0; z < y; z++){
        x[z] = z + 1;
    }

    for(z = 0; z < y; z++){
        if(x[z] % 2 == 0){
            j = j + 1;
        }


    }

    printf("%d\n", j);

    return 0;
}
