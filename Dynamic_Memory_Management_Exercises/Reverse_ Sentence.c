#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write a C program to obtain the reverse reading of a sentence entered from the keyboard using dynamic memory.
*/

int main()
{
	char *text, i, j, temp;
    text = (char *) malloc(100*sizeof(char));

    printf("Enter a sentence: ");
    gets(text);

    for(i = 0, j = strlen(text)-1; i < j; i++, j--){
		temp = *(text+i);
		*(text+i) = *(text+j);
		*(text+j) = temp;
    }
    printf("---------------------\n%s\n---------------------", text);
    free(text);
    return 0;
}
