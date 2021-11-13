#include <stdio.h>
#include <stdlib.h>

/*
Print the following figure on the screen using the character to be received from the user:

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/

void print_shape(char character, int size){
    int i = 0, space, star;
    while(i < size){
        space = i;
        while(space > 0){
            printf("  ");
            space--;
        }
//--------------------------
        star = 2 * i;
        while(star < ((size*2) - 1)){
            printf("%c ", character);
            star++;
        }
//--------------------------
        printf("\n");
        i++;
    }
//**************************
    i = 0;
    while(i < size){
        space = i + 1;
        while(space < size){
            printf("  ");
            space++;
        }
//--------------------------
        star = 2 * i;
        while(star >= 0){
            printf("%c ", character);
            star--;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int size, character;
    printf("Enter the character to be printed on the screen: ");
    scanf("%c", &character);
    printf("Enter size of the shape: ");
    scanf("%d", &size);

    print_shape(character, size);
    return 0;
}
