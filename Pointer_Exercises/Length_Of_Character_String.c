#include <stdio.h>
#include <stdlib.h>

/*
Ask the user to enter a string and write a C program that prints how many characters this string consists of.
Use pointers while writing this program.

Example Output:
Enter a string of characters: Can Boz
The character string you entered consists of 7 characters.
*/

int main()
{
	char character[100];
	char *size;
    printf("Enter a character array: ");
    gets(character);
	size = character;
	while(*size){
		size++;
	}
	printf("------------------------\nThe character string you entered consists of %d characters.", size-character);

    return 0;
}
