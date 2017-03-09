#include <stdio.h>

int main()
{
    int x, y, z, result;

    printf("Please enter a number:");
    scanf("%d", &x);

    printf("Please enter another number:");
    scanf("%d", &y);

    printf("Please enter another number:");
    scanf("%d", &z);

    if( x > y ){
        if(x > z){
            result = x;
        }
        else{
            result = z;
        }
    }
    else{
        if(y > z){
           result = y;
        }
        else{
           result = z;
        }
    }

    printf("This is the largest number:%d\n", result);

    return 0;
}
