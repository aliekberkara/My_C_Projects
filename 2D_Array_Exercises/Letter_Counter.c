#include <stdio.h>
#include <stdlib.h>

/*
--> Ask the user to enter a sentence.
--> Print the number of times the letters in the entered sentence are written on the screen.
*/

int main()
{
	char c;
	int counter[26] = {0}, letter, character = 0, i;
	printf("Enter a sentence: ");
	while((c = getchar()) != '\n'){
		letter = c - 'a';
		if(letter >= 0 && letter < 26){
			counter[letter]++;
		}
		else{
			character++;
		}
	}
	printf("\nThe sentence you entered contains %d characters.", character);
	i = 0;
	while(i < 26){
		printf("%d times %c\n", counter[i], 'a'+i);
		i++;
	}

    return 0;
}
