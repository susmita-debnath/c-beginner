/// Copy a string into another string

#include <stdio.h>
int main()
{
    char s[15], s1[15];
    int i;

    scanf("%s",s);

    for(i=0; s[i]!='\0' ; i++)
        s1[i] = s[i];
        s1[i] = s[i];

    printf("%s",s1);

    return 0;
}
