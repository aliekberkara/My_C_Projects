#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Define a string containing the "k l i b d q i s t e f o r c h x" elements.
Copy this same array using two pointers and a for loop and print it to the screen.
*/

int main()
{
	char character[15] = "klbdqisteforchx", character_copy[15];
    char *letter, *letter1;
    letter1 = character_copy;
    int i = 0;
    for(letter = character; letter < character+15; letter++){
		*letter1 = *letter;
		printf("%c", *(character+i));
		i++;
		letter1++;
    }
	printf("\n----------------------------------\n");
    for(i = 0; i < 15;i++){
		printf("%c", *(character_copy + i));
    }
    return 0;
}
