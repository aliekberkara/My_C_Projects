#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Write a C program that writes N integers randomly generated by the computer into memory and reads them from memory and
lists their squares on the screen.
*/

int main()
{
	int number, *array;
    printf("Enter a number: ");
    scanf("%d", &number);

    array = (int *) malloc(number*sizeof(int));
    srand(time(0));
    printf("---------------------\n");
    for(int i = 0; i < number; i++){
		*(array+i) = rand()%20 + 1;
		printf("%d ", *(array + i));
    }

    printf("\n---------------------\n");

    for(int i = 0; i < number; i++){
		printf("%d ", *(array+i)* (*(array+i)));
    }
    printf("\n---------------------");

	free(array);
    return 0;
}