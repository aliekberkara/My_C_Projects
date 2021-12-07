#include <stdio.h>
#include <stdlib.h>

/*
Write the C program using the recursive function, which enables the generation of numbers by entering the information on how many
Fibonacci numbers will be generated from the keyboard.
*/

void fibonacci(int number, int first, int second){
	if(number > 0){
		printf("%d ", second);
		fibonacci(number-1, second, first+second);
	}
}

int main()
{
	int number, first = 0, second = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0){
    	printf("-----------------------\n%d ", first);
		fibonacci(number-1, first, second);
    }



    return 0;
}
