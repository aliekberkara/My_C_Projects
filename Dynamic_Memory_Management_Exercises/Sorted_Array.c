#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
The function prototypes given below are used to generate N random numbers by the computer and
to sort the generated integers from smallest to largest. Accordingly, using the given function prototypes and using dynamic memory,
write the appropriate C program.

void Create_Array(int*, int);
void Sort_Array(int*, int);
void Biggest(int*, int);
*/

void Create_Array(int *array, int number){

	for(int i = 0; i < number; i++){
		*(array+i) = rand()%100+1;
		printf("%d ", *(array+i));
	}
}

void Sort_Array(int *array, int number){
	int temp;
	for(int j = 0; j < number-1; j++){
		for(int i = 0; i < number-j-1; i++){
			if(*(array+i) > *(array+i+1)){
				temp = *(array+i);
				*(array+i) = *(array+i+1);
				*(array+i+1) = temp;
			}
		}
	}
}

void Biggest(int *array, int number){
	int *max, i;
	max = array;
	for(i = 0; i < number; i++){
		if(*max < *(array+i)){
			max = array+i;
		}
	}
	printf("%d", *max);
}



int main()
{
	int number, *array;
    printf("Enter a number: ");
    scanf("%d", &number);

	array = (int*) malloc(number*sizeof(int));

	srand(time(0));
	printf("---------------------\nCreated:\n");
	Create_Array(array, number);
	printf("\n---------------------\nSorted:\n");
	Sort_Array(array, number);
	for(int i = 0; i < number; i++){
		printf("%d ", *(array+i));
	}
	printf("\n---------------------\nBiggest: ");
	Biggest(array, number);
	printf("\n---------------------");
	free(array);
    return 0;
}
