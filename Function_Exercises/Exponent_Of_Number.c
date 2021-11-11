#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that calculates the result of an operation in the form of a^b,
whose base and exponent values are entered from the keyboard, using a function, and lists the results to the screen.
*/

int take_exponent(int base, int exponent){
    int result = 1;
    while(exponent > 0){
        result *= base;
        exponent--;
    }
    return result;
}

int main()
{
    int exponent, base, result;
    printf("Enter the base and exponent of the number: ");
    scanf("%d %d", &base, &exponent);

    result = take_exponent(base, exponent);
    printf("%d ^ %d = %d", base, exponent, result);
    return 0;
}
