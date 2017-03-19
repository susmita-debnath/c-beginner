/* Write a program in C that takes minutes as input,
and display the total number of hours and minutes. */
#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Please enter your minute:");
    scanf("%d", &x);

    y = x / 60;

    z = x % 60;

    if(x < 60){
        printf("%d minute(s)", x);
    }
     else if(x % 60 == 0){
        printf("%d hour(s)", y);
    }
     else{
        printf("%d hours & %d minutes", y, z);
    }

    return 0;
}
