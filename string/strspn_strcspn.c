/// String Function

/**
    strspn(str1,str2);
    strcspn(str1,str2);
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = "My name is Sharif";
    char str2[100] = "b";
    int len;

    len = strcspn(str1,str2);
    printf("%d\n",len);

    return 0;
}
