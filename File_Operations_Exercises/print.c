#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that allows the information in the print.txt file to be read character by character and displayed on the screen.
*/

int main()
{

    FILE *file;
    char character;
    file = fopen("Print.txt", "r");
    if(file == NULL){
		printf("Failed to Create File.");
    }
    else{
		while(character != EOF){
			character = getc(file);
			if(character != EOF){
				printf("%c", character);
			}
		}
    }
    printf("\n------------------------------");
    fclose(file);
    return 0;
}
