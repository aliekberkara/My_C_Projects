#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that allows a number entered from the keyboard to be written as follows.

Example Output:

Enter a Sentence: I Love Learning Software.

    I
        Love
            Learning
                Software.
*/

int main()
{
    char sentence[150], space = "   ";
    int character = 0, i = 0, tab = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    while(sentence[character]){
        if(sentence[character] == ' '){
            printf("\n");
            while(i >= 0){
                printf("    ");
                i--;
            }
            tab++;
            i = tab;
        }
        else{
        printf("%c", sentence[character]);
        }

        character++;
    }

    return 0;
}
