#include <stdio.h>
#include <stdlib.h>

/*
It is desired to perform the division operation by entering the dividend and divisor values by the user.
Accordingly, write a C program to obtain the quotient and remainder using the prototype given below.
void division(int dividend, int divisor)
*/

void division(int dividend, int divisor){
    int quotient, remainder;
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("------------------------\nQuotient: %d  Remainder: %d", quotient, remainder);
}

int main()
{
    int dividend, divisor;
    printf("Enter dividend and divisor values: ");
    scanf("%d %d", &dividend, &divisor);

    division(dividend, divisor);

    return 0;
}
