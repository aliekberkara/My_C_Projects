#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that reads any upper or lower case letter from the English alphabet into the variable ch
and finds the rank of this letter in the alphabet.
(Hint: You can use (int)ch - (int)'A'+1 for uppercase letters and (int)ch - (int)'a'+1 for lowercase letters.)

Sample Output
Enter a Letter : D
D: is the 4th letter.
*/

int main()
{

    char ch;
    printf("Enter a letter:");
    scanf("%c", &ch);

    if((int)ch >= 65 && (int)ch <= 90){
        printf("%c: Is the %d. letter.", ch, (int)ch - (int)'A'+1);
    }
    else if((int)ch >= 97 && (int)ch <= 122){
        printf("%c: Is the %d. letter.", ch, (int)ch - (int)'a'+1);
    }
    else{
        printf("Invalid Letter!");
    }
    return 0;
}
