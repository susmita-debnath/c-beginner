/// String Basic ( Difference Between char array & string )

#include <stdio.h>
int main()
{
    char ch[10];
    int i=0;

    ch[0] = 'H' ;
    ch[1] = 'S' ;
    ch[2] = 'T' ;
    ch[3] = 'U' ;
    ch[4] = '\0' ;
    ch[5] = 'f' ;
    ch[6] = 'g' ;
    ch[7] = 'h' ;

    while(ch[i] != '\0'){
        printf("%c", ch[i]);
        i++;
    }


    return 0;
}
