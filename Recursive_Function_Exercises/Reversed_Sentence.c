#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write the C program, which provides the reverse reading of a sentence entered from the keyboard,
with the help of the recursive function.
*/

void Reverse_Sentence(char sentence[100], int i, int length){
	int temp;
	if(i <= length){
		temp = sentence[i];
		sentence[i] = sentence[length];
		sentence[length] = temp;
		Reverse_Sentence(sentence, i+1, length-1);
	}
}

int main()
{
	char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);

	printf("--------------------\n");
	printf("%s", sentence);
	int i = 0;
	Reverse_Sentence(sentence, i, strlen(sentence)-1);

	printf("\n--------------------\n");

	printf("%s", sentence);

	printf("\n--------------------\n");
    return 0;
}
