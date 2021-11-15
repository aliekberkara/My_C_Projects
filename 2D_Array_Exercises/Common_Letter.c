#include <stdio.h>
#include <stdlib.h>

/*
--> Write two functions.
--> Write a function that calculates the size of the string and is called by the variable address.
--> Write a function that calculates the number of letters in common for two words and sends it with the address.
--> Write a C program that asks the user to enter two words,
then uses the functions above to print the length of the first entered character string,
and prints the number of common letters between the two words.

Example Output:

Please enter a word or phrase: Help me!!
The length of our character string: 9
Please enter two words: all star
The words all and star have 1 common letter.
*/

void length_word(char word[40], int *length){
	int i = 0;
	while(word[i] != '\0'){
		i++;
		*length = i;
	}
}

void common_letter(char word1[40], char word2[40], int *common){
	int length1, length2, i = 0, j = 0;
	*common = 0;
	length_word(word1, &length1);
	length_word(word2, &length2);

	while(i < length1){
		j = 0;
		while(j < length2){
			if(word1[i] == word2[j]){
				*common += 1;
			}
			j++;
		}
		i++;
	}
}


int main()
{
	char word1[40], word2[40];
	int i = 0, length, common;
    printf("Please enter a word or phrase: ");
	scanf("%c", &word1[i]);
	i++;
	while(word1[i-1] != '\n'){
		scanf("%c", &word1[i]);
		i++;
	}
	word1[i-1] = '\0';
	length_word(word1, &length);
	printf("---------------------------\nThe length of our character string: %d\n-----------------------------\n", length);
//-------------------------------------------------------------
	printf("Enter two words: ");
	scanf("%s %s", &word1, &word2);
	common_letter(word1, word2, &common);
	printf("The words %s and %s have %d common letter.", word1, word2, common);
    return 0;
}
