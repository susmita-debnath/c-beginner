#include<stdio.h>

int main()
{
    int a, b, c, sum;

    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c:");
    scanf("%d", &c);

    sum = a * b * c;

    printf("Sum is:%d\n", sum);

    return 0;
}
