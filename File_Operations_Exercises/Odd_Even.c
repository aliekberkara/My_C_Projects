#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that writes the odd and even numbers up to a positive integer N entered by the user to the odd_even.txt file
and reads it from the file and displays it on the screen.
*/

int main()
{
	char row[100], *character;
    int number, i = 1, j = 2;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("-----------------------------------------\n");

    FILE *file;
    file = fopen("Odd_Even.txt", "w");
    if(file == NULL){
		printf("Failed to Create File.");
    }
    else{
		fprintf(file, "Odd Numbers                Even Numbers\n-----------                ------------\n");
		while(i <= number || j <= number){
			if(j > number){
				fprintf(file, "%6d", i);
				break;
			}
			fprintf(file, "%6d                           %d\n", i, j);
			i += 2, j += 2;
		}
    }
    fclose(file);

    file = fopen("Odd_Even.txt", "r");
	if(file == NULL){
		printf("Failed to Create File.");
    }
    else{
		while(character != NULL){
			character = fgets(row, 100, file);
			if(character != NULL){
				printf("%s", row);
			}
		}
    }
    printf("\n-----------------------------------------");
    fclose(file);
    return 0;
}
