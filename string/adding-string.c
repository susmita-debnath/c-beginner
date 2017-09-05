/// add a string after another string

#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int ln,i;

    scanf("%s%s",s,s1);

    for(ln=0; s[ln]!='\0'; ln++) ;
    s[ln] = ' ';
    ln++;

    for(i=0; s1[i]!='\0'; i++)
        s[ln+i] = s1[i];
    s[ln+i] = s1[i];

    printf("%s",s);

    return 0;
}
