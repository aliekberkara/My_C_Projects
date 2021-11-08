#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
A C program that takes the sides of a triangle as input and determines whether it is equilateral, isosceles, or
write. It should also be checked whether the sides form a triangle.
Example output:
Enter the Sides of the Triangle: 5 6 7
This is a scalene triangle.
*/

int main()
{
    int side, side1, side2;
    printf("Enter the Sides of the Triangle: ");
    scanf("%d %d %d", &side, &side1, &side2);
    if(((abs(side-side1) < side2) && (side2 < abs(side+side1))) && ((abs(side-side2) < side1) && (side1 < abs(side+side2))) &&
       ((abs(side2-side1) < side) && (side < abs(side2+side1)))){

        if(side1==side2 && side == side2 && side1 == side){
            printf("This is a Equilateral Triangle.");
        }
        else if(side1==side2 || side == side2 || side1 == side){
            printf("This is a Isosceles Triangle.");
        }
        else{
            printf("This is a Scalene Triangle.");
        }
    }
    else{
        printf("This Is Not a Triangle.");
    }
    return 0;
}
