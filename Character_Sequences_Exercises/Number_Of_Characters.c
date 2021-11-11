#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that finds the number of characters in a sentence entered from the keyboard without using the strlen() function.
*/

int main()
{
    char sentence[150];
    int counter = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while(sentence[counter]){
        counter++;
    }
    printf("Number of characters in the sentence '%s' : %d", sentence, counter);



    return 0;
}
