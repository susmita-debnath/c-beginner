/// Calculate the length of a string

#include<stdio.h>
int main()
{
    char ch[10] = "HSTU";
    int ln,i;

    i = 0;

    for(ln=0; ch[ln]!='\0'; ln++);

    printf("%d",ln);

    return 0;
}
