#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that allows a sentence entered by the user to be written N times in the info.txt file
*/

int main()
{
	char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n");

    FILE *file;
    file = fopen("info.txt", "w");
    for(int i = 0; i < number; i++){
		fprintf(file, "Row: %d: %s\n", i+1, sentence);
		printf("Row: %d: %s\n", i+1, sentence);
    }
    fclose(file);
    return 0;
}
