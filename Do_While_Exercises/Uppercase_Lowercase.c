#include <stdio.h>
#include <stdlib.h>

/*
--> Ask the user to enter an uppercase character.
--> If the character you entered is uppercase, print that letter as lowercase.
--> If the character you entered is lowercase, print an error message on the screen.
*/

int main()
{
    char uppercase;
    printf("Enter a uppercase letter: ");
    scanf("%c", &uppercase);
	printf("------------------------\n");
    if(uppercase >= 'A' && uppercase <= 'Z'){
        printf("%c --> %c", uppercase, tolower(uppercase));
    }
    else{
        printf("Invalid Character!!!");
    }
    printf("\n-------------------------");
    return 0;
}
