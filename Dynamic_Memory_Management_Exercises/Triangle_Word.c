#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write a C program using dynamic memory to display the characters of a word entered by the user as follows.

p
p r 
p r o
p r o g
p r o g r
p r o g r a
p r o g r a m
p r o g r a m m
p r o g r a m m i
p r o g r a m m i n
p r o g r a m m i n g
*/

int main()
{
	char *word;
	int i, j;
    word = (char *) calloc(50, sizeof(char));

    printf("Enter a word: ");
    scanf("%s", word);
	printf("--------------------------\n");

    for(i = 0; i < strlen(word); i++){
		for(j = 0; j <= i; j++){
			printf("%c ", word[j]);
		}
		printf("\n");
    }
    printf("\n--------------------------");
    free(word);
    return 0;
}
