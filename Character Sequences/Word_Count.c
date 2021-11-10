#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that finds the number of words in a sentence entered from the keyboard.
*/

int main()
{
    int counter = 1, i = 0;
    char sentence[150];

    printf("Enter a sentence: ");
    gets(sentence);

    while(sentence[i]){
        if(sentence[i] == ' '){
            counter++;
        }
        i++;
    }
    printf("Word count of the sentence '%s': %d", sentence, counter);


    return 0;
}
