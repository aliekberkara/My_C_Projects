#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that performs the sum of the diagonal values of a user-entered N*N matrix using dynamic memory.
*/

int main()
{
	int number, **matrix, i, j, total = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    matrix = (int **) malloc(number*sizeof(int *));
    printf("---------------------\nEnter elements of matrix:\n");
    for(i = 0; i < number; i++){
		matrix[i] = (int*) malloc(number*sizeof(int));
		for(j = 0; j < number; j++){
			printf("Row: %d Column: %d\n", i, j);
			scanf("%d", &matrix[i][j]);
		}
    }
    printf("\n---------------------\n");

	for(i = 0; i < number; i++){
		for(j = 0; j < number; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
    }

	printf("\n---------------------\n");

	for(i = 0; i < number; i++){
		for(j = 0; j < number; j++){
			if(i == j){
				total += matrix[i][j];
			}
		}
    }
    printf("Diagonal Total: %d", total);
	printf("\n---------------------\n");

	for(i = 0; i < number; i++){
		free((void*)matrix[i]);
	}
	free((void*)matrix);
    return 0;
}
