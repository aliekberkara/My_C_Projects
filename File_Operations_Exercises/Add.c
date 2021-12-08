#include <stdio.h>
#include <stdlib.h>

/*
It is assumed that there is some information in the info.txt file.
Accordingly, write a C program that allows a sentence entered by the user to be added to the character-by-character info.txt file.
*/

int main()
{
	char *character, add[100];
    printf("Enter a sentence: ");
    gets(add);

    FILE *file;
    file = fopen("Add.txt", "a");

    if(file == NULL){
		printf("Failed to create file.");
    }
    else{
		fprintf(file, "\n");
		fprintf(file, "%s\n--------------------------------", add);
    }
    fclose(file);
    file = fopen("Add.txt", "r");
	if(file == NULL){
		printf("Failed to create file.");
    }
    else{
		while(character != NULL){
			character = fgets(add, 100, file);
			if(character != NULL){
				printf("%s", add);
			}
		}
    }

    fclose(file);
    return 0;
}
