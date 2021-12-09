#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that allows N integers entered from the keyboard to be written to the memory by allocating space,
and to be read from the memory and listed on the screen.
*/

int main()
{
	int number, *array;
    printf("Enter a number: ");
    scanf("%d", &number);

    array = (int*) malloc(number*sizeof(int));

    for(int i = 0; i < number; i++){
		printf("Enter a elements of array: ");
		scanf("%d", &array[i]);
    }
    printf("----------------------\n");
	for(int i = 0; i < number; i++){
		printf("%d ", array[i]);
	}
    return 0;
}
