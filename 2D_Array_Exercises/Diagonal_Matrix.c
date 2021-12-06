#include <stdio.h>
#include <stdlib.h>

/*
1-Ask the user to define a matrix.

2-Check whether this matrix is symmetrical by writing a function. Write it by processing the value of the address.

3-Write a function that checks whether this matrix is diagonal or not. Write it by processing the value of the address.

4-Write a function that prints this matrix to the screen.

Write a C program that contains the above functions and the operation of the program is as follows.

	Example Output:

		2	0	0	0	0
		0	6	0	0	0
		0	0	2	0	0
		0	0	0	7	0
		0	0	0	0	4

	This Matrix is Symmetrical.
	This Matrix is Diagonal.
*/

void Is_Symmetrical(int *element, int matrix[*element][*element] ){
	int is_symmetrical = 1;
	int i = 0, j;
    while(i < *element){
		j = 0;
		while(j < *element){
				if(matrix[i][j] != matrix[j][i]){
					is_symmetrical = 0;
				}
			j++;
		}
		i++;
    }
    if(is_symmetrical == 1){
		printf("This Matrix is Symmetrical.");
		}
    else{
		printf("This Matrix is not Symmetrical.");
    }
}

void Is_Diagonal(int *element, int matrix[*element][*element]){
	int is_diagonal = 1;
	int i = 0, j;
    while(i < *element){
		j = 0;
		while(j < *element){
			if(i != j){
				if(matrix[i][j]!= 0){
					is_diagonal = 0;
				}
			}
			j++;
		}
		i++;
    }
    if(is_diagonal == 1){
		printf("This Matrix is Diagonal.");
    }
    else{
		printf("This Matrix is not Diagonal.");
    }
}

void Print_Matrix(int *element, int matrix[*element][*element]){
	int i = 0;
	int j;
    while(i < *element){
		j = 0;
		while(j < *element){
			printf("%d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
    }
}
int main()
{
	int element;
    printf("Enter the number of elements of the matrix: ");
    scanf("%d", &element);
    int matrix[element][element];
    printf("--------------------\nEnter the Elements of the Matrix: \n");
    int i = 0, j;
    while(i < element){
		j = 0;
		while(j < element){
			printf("Row: %d Column: %d\n", i+1, j+1);
			scanf("%d", &matrix[i][j]);
			j++;
		}
		i++;
    }
    printf("--------------------\n");
    Print_Matrix(&element, matrix);
    printf("\n--------------------\n");
    Is_Symmetrical(&element, matrix);
    printf("\n--------------------\n");
	Is_Diagonal(&element, matrix);
	printf("\n--------------------\n");


    return 0;
}
