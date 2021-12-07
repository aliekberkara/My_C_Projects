#include <stdio.h>
#include <stdlib.h>
/*
Write a C program that calculates the factorial of numbers up to an N positive integer entered from the keyboard
with the help of a recursive function.
*/

int factorial(int number){
	if(number == 1){
		return 1;
	}
	else{
		return number *= factorial(number-1);
	}
}

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("%d! = %d", number, factorial(number));
    return 0;
}
