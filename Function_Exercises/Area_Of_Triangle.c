#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a C program using a function to find the area of a triangle with different side lengths.

u = (a+b+c) / 2
Alan^2 = u*(u-a)*(u-b)*(u-c)
*/

float area_of_triangle(int side1, int side2, int side3){
    float u, area;
    u = (side1 + side2 + side3) / 2.0;
    area = u * abs(u - side1) * abs(u - side2) * abs(u - side3);
    area = sqrt(area);
    return area;
}

int main()
{
    int side1, side2, side3;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    printf("Area of Triangle: %.2f", area_of_triangle(side1, side2, side3));
    return 0;
}
