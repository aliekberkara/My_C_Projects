#include <stdio.h>
#include <stdlib.h>

/*
Write the C program that performs the division (A/B) of two integers entered from the keyboard without using the division symbol,
with the help of the recursive function.
*/

int Division(int number1, int number2, int counter){
	if(number1 < number2){
		return counter;
	}
	else{
		Division(number1-number2, number2, counter+1);
	}
}

int main()
{
	int number1, number2, counter = 0;
    printf("Enter two numbers: \n");
    scanf("%d %d", &number1, &number2);
    printf("----------------------\n");
    printf("%d / %d = %d", number1, number2, Division(number1, number2, counter));

    return 0;
}
