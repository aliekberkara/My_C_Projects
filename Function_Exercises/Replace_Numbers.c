#include <stdio.h>
#include <stdlib.h>

/*
Integers entered by the user are kept in the x and y variables.
The prototype of the function that allows the replacement of the values in the X and Y variables is given below.
Write the appropriate C program.
void replace(int x, int y);
*/

void replace_x_y(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    printf("x: %d y: %d\n-----------------------", x, y);
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("-----------------------\nx: %d y: %d\n-----------------------\n", x, y);
    replace_x_y(x, y);
    return 0;
}
