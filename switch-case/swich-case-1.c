#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", ch);

    if(( ch >= 'A' && ch <= 'Z' ) || ( ch >= 'a' && ch <= 'z' ))
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a VOWEL.\n", ch);
                break;
            default:
                printf("%c is a CONSONANT.\n", ch);
        }
    }
    else{
        printf("%c is not an alphabet.\n");
    }

    return 0;
}
