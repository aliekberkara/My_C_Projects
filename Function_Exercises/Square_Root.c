#include <stdio.h>
#include <stdlib.h>

/*
Write a C program using a function to find the square root of a user-entered positive integer (without using sqrt()).
(A: Entered Number)

K = A/2
Square root = Total from 1 to 50 K^2+A/2K
*/

float square_root(float number){
    float squareRoot = number/2;
    int i = 0;
    if(number > 0){
        while(i < 50){
           squareRoot = ((squareRoot*squareRoot) + number) / (2*squareRoot);
           i++;
        }
        return squareRoot;
    }
    else if(number == 0){
        return 0;
    }
    else{
        printf("Invalid Number!!!");
    }
}

int main()
{
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    printf("Square root of %.3f is %.3f", number, square_root(number));

    return 0;
}
