#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that allows the information in the row.txt file to be read line by line and displayed on the screen.
*/

int main()
{
	char *character, row[100];
	printf("-------------------------\n");

	FILE *file;
	file = fopen("row.txt", "r");
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
	printf("\n-------------------------");
	fclose(file);
	return 0;
}
