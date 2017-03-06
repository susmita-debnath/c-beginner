#include <stdio.h>

int main()
{
    int even[50], odd[50], z, n, i = 0, j = 0;

    for(z = 0; z < 100; z++){
        n = z + 1;
        if(n % 2 == 0){
            even[i++] = n;
        }
        else{
            odd[j++] = n;
        }
    }

    for(z = 0; z < 50; z++){
        printf("%d\n", even[z]);
    }

    for(z = 0; z < 50; z++){
        printf("%d\n", odd[z]);
    }


    return 0;
}
