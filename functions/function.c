#include <stdio.h>

int main()
{
    int result;

    result = add();

    result = addReturn();
    printf( "\nThe result is %d", result );

    result = addNumbers( 30, 40 );
    printf( "\nThe result is %d", result );

    result = addNumbers( 50, 40 );
    printf( "\nThe result is %d", result );

    return 0;
}

int add()
{
    int x = 10, y = 20, sum = 0;
    sum = x + y;

    printf( "The sum is %d", sum );

    return 0;
}

int addReturn()
{
    int x = 10, y = 20, sum = 0;
    sum = x + y;

    return sum;
}

int addNumbers( int x, int y )
{
    return x + y;
}
