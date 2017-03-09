#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Please enter a number:");
    scanf("%d", &x);

    printf("Please enter another number:");
    scanf("%d", &y);

    printf("Please enter another number:");
    scanf("%d", &z);

    if( x > y ){
        if(x > z){
            printf("This is the biggest number:%d\n", x);
        }
        else{
            printf("This is the biggest number:%d\n", z);
        }
    }
    else{
        if(y > z){
           printf("This is the biggest number:%d\n", y);
        }
        else{
            printf("This is the biggest number:%d\n", z);
        }
    }

    return 0;
}
