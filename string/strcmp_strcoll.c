/// String Function

/**
    strlen(str);
    strcpy(str1, str2);
    strncpy(str1, str2,n);
    strcat(str1,str2);
    strncat(str1,str2);
    strcmp(str1, str2);
    strncmp(str1,str2,n);
    strcoll(str1,str2);
*/


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = "BBB";
    char str2[100] = "BBB";

    printf("%d",strcoll(str1,str2));

    return 0;
}
