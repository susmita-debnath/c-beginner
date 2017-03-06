#include <stdio.h>

int main()
{
    int x[50], y;

    for(y = 0; y < 50; y++){
        x[y] = y + 1;
    }

    for(y = 0; y < 50; y++){
        printf("%d\n", x[y]);
    }

    return 0;
}
