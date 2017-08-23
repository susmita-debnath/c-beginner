/// ps 06 Simple input output program
/**
    Take strings as input and print them. The program will exit when input string is empty.

    Sample input:        Sample output:
    HSTU                 HSTU
    Dinajpur             Dinajpur
    5200                 5200


*/

#include <stdio.h>
int main()
{
    char ch[100];

    while(gets(ch)){
        if(ch[0]=='\0')
            return 0;
        printf("%s\n",ch);
    }

    return 0;
}
