#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that calculates the factorial of each number from 1 to 10 using a function and lists the results to the screen.
*/

int factorial(int number){
    int factorial1 = 1;
    while(number >= 1){
        factorial1 *= number;
        number--;
    }
    return factorial1;
}

int main()
{
    int number = 1, factorial1;
    while(number <= 10){
        factorial1 = factorial(number);
        printf("%d! = %d\n-------------------\n", number, factorial1);
        number++;
    }

    return 0;
}
