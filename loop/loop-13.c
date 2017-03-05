#include <stdio.h>

int main()
{
    int x, y, z;

    for(x = 1; x <= 3; x = x + 1){
        for(y = 1; y <= 3; y = y + 1){
                for(z = 1; z <= 3; z = z + 1)
            printf("%d, %d, %d\n", x, y, z);
        }
    }

    return 0;
}
