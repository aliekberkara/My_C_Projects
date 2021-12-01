#include <stdio.h>
#include <stdlib.h>

/*
The prototype of the function that calculates the factorial of the N positive integer entered by the user is given below.
Accordingly, write the C program using the following prototype.

int factorial( int *number)
*/

int factorial(int *number){
	int i, factorial = 1;
	i = *number;
	while(i >= 2){
		factorial *= i;
		i--;
	}
	return factorial;
}

int main()
{
	int number;

    printf("Enter a number: ");
    scanf("%d", &number);

	printf("Factorial: %d", factorial(&number));
    return 0;
}
