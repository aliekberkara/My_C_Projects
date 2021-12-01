#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ask the user to enter a string of characters. Ask to remove a desired letter from the character string you entered.
Write a C program that prints the final version of the array after the character you want is removed.

Sample Program:

Enter a string of characters: can boz

Enter the character you want to remove: c
The final version of the character series: an boz
*/

int main()
{
	char character[100];
	char *del, *index;

    printf("Enter a string of characters: ");
    gets(character);
    printf("Enter the character you want to remove: ");
    scanf("%c", del);
    index = character;
    while(*index){
		if(*index == *del){
			strcpy(index, index+1);
		}
		index++;
    }
    index = character;
    printf("--------------------------\nThe final version of the character series: ");
    while(*index){
		printf("%c", *index);
		index++;
    }

    return 0;
}














