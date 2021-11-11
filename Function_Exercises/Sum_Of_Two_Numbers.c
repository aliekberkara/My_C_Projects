#include <stdio.h>
#include <stdlib.h>

// Write a C program that calculates the sum of two integers entered from the keyboard using a function.

int main()
{
    int number1, number2, total;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    total = addition(number1, number2);

    printf("Sum of Two Numbers: %d", total);
    return 0;
}

int addition(int number1, int number2){
    return number1 + number2;
}
