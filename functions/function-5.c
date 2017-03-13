#include <stdio.h>

int main()
{
    int k;
    double x, y, z, m, a;

    printf("Roll:");
    scanf("%lf", &k);

    printf("Marks of Bangla:");
    scanf("%lf", &x);

    printf("Marks of English:");
    scanf("%lf", &y);

    printf("Marks of Math:");
    scanf("%lf", &z);

    a = add(x, y, z);

    return 0;
}
int add(double x, double y, double z)
{
    double m, l = 300;

    double  n = x + y + z;

    printf("Obtained marks:%0.2lf\n", n);

    m = (n / l) * 100;

    printf("Percentage of marks:%0.2lf\n", m);

    if(m >= 80){
        printf("You get First Division.\n");
    }
    else if(m >= 60){
        printf("You get Second Division.\n");
    }
    else if(m >= 40){
       printf("You get Third Division.\n");
    }
    else if(m <= 33){
        printf("You are failed.");
    }

    return m;
}

