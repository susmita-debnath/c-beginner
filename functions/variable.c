/// Function ( Global variable, local variable )

#include<stdio.h>

int res, c;

int add (int a, int b)
{
    int res;
    res = a + b;
    c = b;
    return res;
}

int abs (int a)
{
    int res;
    res = a < 0 ? -a:a;
    c = a;
    return res;
}

int main()
{
    add(5,6);
    printf("%d %d\n",res,c);

    return 0;
}
