#include<stdio.h>

int main()
{
    int n;

    printf("Please enter a number:", n);
    scanf("%d", &n);

    if(n == 0){
        printf("The number is neutral.");
    }
    else if(n % 2 == 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
    return 0;
}
