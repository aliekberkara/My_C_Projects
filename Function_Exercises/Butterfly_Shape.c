#include <stdio.h>
#include <stdlib.h>

/*
Print the figure below:

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

void print_shape(int size){
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
            printf("* ");
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
            printf("* ");
            star--;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int size;
    printf("Enter size of the shape: ");
    scanf("%d", &size);

    print_shape(size);
    return 0;
}
