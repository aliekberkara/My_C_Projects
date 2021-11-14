#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
--> Ask the user to enter a positive number.
--> Calculate the square root of the number you entered.
--> If the number you entered is negative, ask to enter a new number.
--> If the number you entered is 0, the program will stop working.
*/

int main() {
    float number;

    do {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number > 0) {
            printf("-------------------------------\nThe square root of %.0f is %.2f\n-------------------------------\n", number, sqrt(number));
        } else if(number < 0) {
            printf("-------------------------------\nInvalid Number!!!\n");
            continue;
        } else {
            printf("-------------------------------\nINVALID NUMBER!!!");
        }
    } while(number > 0 || number < 0);
    return 0;
}
