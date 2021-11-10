#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
--> Enter 5 functions.
--> Write a function that inputs a string of characters to the user.
--> Write a function that finds the number of elements in the character string entered by the user.
--> Write a function that removes spaces in the string that the user enters.
--> Write a program that replaces the characters in the string from the back to the beginning.
--> Write a palindrome function. This function checks whether the string is the same string in the end-to-end and through-write.
If so, let it send 1 if it is a palindrome, and 0 if it is not a palindrome.
--> Write a C program that asks the user to enter a character string using the functions above,
and then prints whether there is a palindrome or not.
*/

int main(void){
    char sequence[150];
    int a;
    printf("Enter a character sequence: ");
    read_sentence(sequence);
    a = palindrome(sequence);
    if(a == 1){
        printf("\n---------------------\nThis word is a palindrome.\n----------------------");
    }
    if(a == 0){
        printf("\n---------------------\nThis word is not a palindrome.\n------------------------");
    }
    return 0;
}

void read_sentence(char sequence[150]){
    int i = 0;
    scanf("%c", &sequence[i]);
    while((sequence[i] != '\n') && i < 150){
        i++;
        scanf("%c", &sequence[i]);
    }
    sequence[i] = '\0';
}

int lenght(char sequence[150]){
    int i = 0;
    while(sequence[i] != '\0'){
        i++;
    }
    return i;
}

void delete_spaces(char sequence[150]){
    int i = 0, j = 0;
    while(sequence[i]){
        if(sequence[i] != ' '){
           sequence[j] = sequence[i];
           j++;
        }
        i++;
    }
    sequence[j] = '\0';
}

void reverse(char sequence[150], char reversed[150]){
    int j = (strlen(sequence)-1), i = 0;
    printf("\n----------------\n");
    while(j >= 0){
        printf("%c ", sequence[j]);
        reversed[i] = sequence[j];
        i++;
        j--;
    }
    reversed[i] = '\0';
}

int palindrome(char sequence[150]){
    int isPalindrome = 0, i = 0, l;
    char reversed[150];
    delete_spaces(sequence);
    l = lenght(sequence);
    reverse(sequence, reversed);
    while(i < l){
        if(reversed[i] != sequence[i]){
            isPalindrome = 0;
        }
        else{
            isPalindrome = 1;
        }
        i++;
    }
    return isPalindrome;
}

