#include <stdio.h>
#include <stdlib.h>

// Write a C program that calculates the factorial of an integer entered from the keyboard using a function.

int factorial(int number){
    int factorial1 = number;
    while(number > 1){
        factorial1 *= (number-1);
    number--;
    }
    return factorial1;
}

int main()
{
    int number, factorial1;
    printf("Enter a number: ");
    scanf("%d", &number);

    factorial1 = factorial(number);
    printf("%d! = %d", number, factorial1);
    return 0;
}
