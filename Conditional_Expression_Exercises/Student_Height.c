#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that calculates which of the students in a class is closest to 150cm tall.
This program should take student numbers and their height in centimeters as input.
Data entry should continue until the student number is entered as a negative number.

Example Output:

Student Number: 124

Student Height: 167

Student Number: 7540

Student Height: 154

Student Number: 566

Student Height: 148

Student Number: 2149

Student Height: 166

Student number 566 is closest to 150 cm with a height of 148 cm.
*/

int main() {
    int no, height, closeTo, minNo, minHeight;

    printf("Student Number: ");
    scanf("%d", &no);
    printf("\nStudent Height: ");
    scanf("%d", &height);

    minNo = no;
    closeTo = abs(150 - height);

    while(no > 0) {
        printf("\n-----------------------\nStudent Number: ");
        scanf("%d", &no);
        printf("\nStudent Height: ");
        scanf("%d", &height);

        if(abs(150-height) < closeTo){
        closeTo = abs(150-height);
        minNo = no;
        minHeight = height;
        }

    }
    printf("\nStudent number %d is closest to 150 cm with a height of %d cm.\n----------------------", minNo, minHeight);

    return 0;
}











