#include <stdio.h>
#include <stdlib.h>

/*
Write the C program that writes the letters of a word entered from the keyboard by increasing one letter as follows.

Example Output:

Enter a word: help

h
h e
h e l
h e l p
*/

int main()
{
    char word[15];
    int character = 0, i = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    while(word[character]){
        while(i <= character){
            printf("%c ", word[i]);
            i++;
        }
        i = 0;
        printf("\n");
        character++;
    }
    return 0;
}
