#include <stdio.h>
#include <stdlib.h>

/*
Write the C program that produces the screenshot given below, using functions/functions.

Example Output:

Enter Number of Lines: 4

                c
              c c c
            c c c c c
          c c c c c c c
            + + + + +
              + + +
                +
*/

void shape(int row){
    int space = row - 1, letter = 1, i = 1, temp;
    while(i <= row){
        temp = space;
        while(temp > 0){
            printf("  ");
            temp--;
        }
//----------------------------
        temp = letter;
        while(temp > 0){
            printf("c ");
            temp--;
        }
//----------------------------
        temp = letter - 1;
        while(temp > 0){
            printf("c ");
            temp--;
        }
        letter++;
        space--;
//----------------------------
        printf("\n");
        i++;
    }
    space = row - 1;
    letter = 1;
    i = 1;
    while(i < row){
        temp = space;
        while(temp < row){
            if(temp <= 0){
                break;
            }
            printf("  ");
            temp++;
        }
        space--;
//----------------------------
        temp = letter;
        while(temp < row){
            printf("+ ");
            temp++;
        }
//----------------------------
        temp = letter + 1;
        while(temp < row){
            printf("+ ");
            temp++;
        }
        letter++;
        printf("\n");
        i++;
    }


}

int main()
{
    int row;
    printf("Enter Number of Lines: ");
    scanf("%d", &row);

    shape(row);

    return 0;
}
