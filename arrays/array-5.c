#include <stdio.h>

int main()
{
    int a, b, largeNumber, smallNumber, j = 0, k = 0, i;

    printf("Please enter a number:");
    scanf("%d", &a);

    printf("Please enter another number:");
    scanf("%d", &b);

    if(a > b){
        largeNumber = a;
        smallNumber = b;
    }
    else{
        smallNumber = a;
        largeNumber = b;
    }

    int z = largeNumber - smallNumber + 1;
    int data[z];

    for(i = 0; i < z; i++){
        data[i] = i + smallNumber;
    }

    for(i = 0; i < z; i++){
        if(data[i] % 2 == 0){
            j++;
        }
        else{
            k++;
        }
    }


    printf("There are %d even numbers and %d odd numbers between %d & %d.", j, k, smallNumber, largeNumber);

    return 0;
}
