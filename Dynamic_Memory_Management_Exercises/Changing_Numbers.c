#include <stdio.h>
#include <stdlib.h>

/*
Space is allocated in different memory areas for two integers entered by the user.
Accordingly, write a C program that allows the numbers in these two memory regions to be swapped.
*/

int main()
{
	int *number1, *number2, *temp;
	number1 = (int *) malloc(sizeof(int));
	number2 = (int *) malloc(sizeof(int));

    printf("Enter the 1st number: ");
    scanf("%d", number1);
    printf("Enter the 2nd number: ");
    scanf("%d", number2);
    printf("-------------------------------\n");

    printf("First number: %d Second number: %d\n", *number1, *number2);
    printf("-------------------------------\n");

    temp = number1;
    number1 = number2;
    number2 = temp;
    printf("First number: %d Second number: %d\n", *number1, *number2);
    printf("-------------------------------\n");
    free(number1);
    free(number2);
    return 0;
}
