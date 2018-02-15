/// Function Basic ( parameter_list )


/**
    return_type
    function_name
    parameter_list
    return_value
*/

#include<stdio.h>

int power (int n, int pow)
{
    int mult = 1,i;

    for (i=1; i<=pow; i++)
        mult = mult * n;

    return mult;
}

int main()
{
    int ans;
    ans = power(2,10);
    printf("%d\n",ans);

    return 0;
}
