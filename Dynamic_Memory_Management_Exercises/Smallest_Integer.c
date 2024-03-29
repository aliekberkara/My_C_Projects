#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Write a C program that allows N random integers generated by the computer to be written to memory by allocating space and
to find the smallest of these integers.
*/

int main()
{
	int number, *array, *min;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("-----------------------\n");

    array = (int *) malloc(number*sizeof(int));
    srand(time(0));
    for(int i = 0; i < number; i++){
		*(array+i) = rand()%100+1;
		printf("%d ", *(array+i));
    }
	printf("\n-----------------------\n");

    min = array;
    for(int i = 1; i < number; i++){
		if(*min > *(array+i)){
			*min = *(array + i);
		}
    }
    printf("%d", *min);
	printf("\n-----------------------\n");
    free(array);
    return 0;
}
