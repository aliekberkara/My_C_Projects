#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that writes a value to a matrix whose number of rows and columns is entered from the keyboard,
allocates space from memory and displays this matrix to the screen.
*/

int main()
{
	int row, column, **matrix;
	printf("Row: ");
	scanf("%d", &row);
	printf("Column: ");
	scanf("%d", &column);
	matrix = (int **) calloc(row, sizeof(int *));

	printf("---------------------------\n");

	for(int i = 0; i < row; i++){
		*(matrix+i) = (int*) malloc(column*sizeof(int));
		for(int j = 0; j < column; j++){
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("---------------------------\n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < column; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------\n");

	for(int i = 0; i < row; i++){
		free((void *) matrix[i]);
	}
	free((void *) matrix);

    return 0;
}
