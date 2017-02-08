#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the first letter of your name:", ch);
    ch = getchar();
    printf("The first letter of your name: %c\n", ch);

    return 0;
}
