/* C program to read age of 15 person
and count total Baby age, School age and Adult age. */
#include <stdio.h>

int main()
{
    int x, y = 0, z = 0, j = 0, i;

    for(i = 1; i <= 15; i++){
        printf("Please enter your age:");
        scanf("%d", &x);

        if( x <= 6){
            y++;
        }
        else if(x <= 18 && x > 6){
            z++;
        }
        else if(x > 18 && x <= 40){
            j++;
        }
        else if(x > 40){
            printf("No choice.\n");
        }
    }

    printf("Here are %d baby ages, %d school ages & %d adult ages.\n", y, z, j);

    return 0;
}
