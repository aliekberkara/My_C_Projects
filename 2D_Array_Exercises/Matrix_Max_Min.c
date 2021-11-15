#include <stdio.h>
#include <stdlib.h>

/*
--> Write three functions:
--> Write a function that enters the values of a matrix to the user.
--> Write a function that finds the largest, smallest element of the matrix values you entered and
the sum of the entered elements. Call this function with the variable's address call method.
--> Write a function to print the matrix whose elements are entered.
--> Write a C program that calls the above functions and has a structure like the one below.

Example Output:

Enter a 3x2 matrix:
5
6
4
3
2
8

Our matrix:
5 6
4 3
2 8

Maximum value: 8
Minimum value: 2
Sum of all elements of the matrix: 28
*/

void init_table(int matrix[3][2]){
	int i = 0, j = 0;
	printf("------------------------\nEnter a 3x2 matrix: \n");
	while(i < 3){
		j = 0;
		while(j < 2){
			scanf("%d", &matrix[i][j]);
			j++;
		}
		i++;
	}
}
void print_table(int matrix[3][2]){
    int i = 0, j = 0;
    printf("\n------------------------\nOur matrix:\n");
	while(i < 3){
		j = 0;
		while(j < 2){
			printf("%4d", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
void calculate (int matrix[3][2], int *max, int *min, int *total){
    int i = 0, j;
    *max=matrix[0][0];
    *min=matrix[0][0];
    *total = 0;
    while(i < 3){
		j = 0;
        while(j < 2){
            if(matrix[i][j] > *max)
            {
                *max = matrix[i][j];
            }
            if(matrix[i][j] < *min)
            {
                *min = matrix[i][j];
            }
            *total += matrix[i][j];
            j++;
        }
        i++;
    }

}

int main()
{
    int min,max,total;
    int matrix[3][2];
    init_table(matrix);
    print_table(matrix);
    calculate(matrix,&max,&min,&total);
    printf("\n------------------------\nMaximum value: %d\n------------------------\n",max);
    printf("Minimum value: %d\n------------------------\n",min);
    printf("Sum of all elements of the matrix: %d\n------------------------",total);


    return 0;
}
