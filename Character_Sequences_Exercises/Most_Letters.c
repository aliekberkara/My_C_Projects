#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that finds the most used character in a sentence entered with lowercase letters on the keyboard.
*/


int main()
{
	char sentence[100];
	int letter[100] = {0};
	int  i = 0, j, max;

	printf("Enter a sentence: ");
	gets(sentence);

	while(sentence[i]){
		letter[(sentence[i] - 'a')]++;
		i++;
	}
	max = letter[0];
	i = 0;
	j = 1;

	while(j < 26){
		if( letter[j] > max ) {
			max = letter[j];
			i = j;
      }
      j++;
	}
	printf("The letter '%c' is the most common letter in the sentence '%s'(%d times).\n", ('a' + i), sentence, max);
 return 0;
}
