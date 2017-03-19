/* Write a program in C that takes width and height of a triangle
and display the area of that triangle */
#include <stdio.h>

int main()
{
    int width, height, area;

    printf("Please enter the width:");
    scanf("%d", &width);

    printf("Please enter the height:");
    scanf("%d", &height);

    area = getTriangleArea(width, height);

    printf("Here is the area:%d square feet", area);

    return 0;
}

int getTriangleArea(int width, int height)
{
    return 0.5 * width * height;
}
