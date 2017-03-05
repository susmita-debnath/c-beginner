#include <stdio.h>

int main()
{
    int x[3] = {2,5,6}, y;

    for(y = 1; y <= 3; y++){
        printf("%d\n", x[y-1]);
    }

    return 0;
}
