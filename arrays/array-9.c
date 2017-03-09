#include <stdio.h>

int main()
{
    int i, n, y, j;

    printf("How many numbers do you want to check: ");
    scanf("%d", &n);

    int x[n];

    printf("Please enter the numbers\n");

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }



    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if (x[i] > x[j]){
              x[i] = x[i] + x[j];
              x[j] = x[i] - x[j];
              x[i] = x[i] - x[j];
            }
        }
    }
    printf("This is the result\n");
    for(i = 0; i < n; i++){
        printf("%d\n", x[i]);
    }

    return 0;
}
