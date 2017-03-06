#include <stdio.h>

int main()
{
    int x[3], y;

    x[0] = 4;
    x[1] = 5;
    x[2] = 6;

    for(y = 0; y <= 3; y++){
        printf("%d\n", x[y]);
    }

    return 0;
}
