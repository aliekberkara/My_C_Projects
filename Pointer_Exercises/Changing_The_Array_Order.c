#include <stdio.h>
#include <stdlib.h>

/*
Ask the user to enter the values of an array of type integer.
Write a C program that completely replaces the array elements you entered using two pointers.
The operation of the program is as follows:

Example Output:

Enter the number of elements of the array: 6
Element 0: 5
Element 1: 6
Element 2: 1
Element 3: 9
Element 4: 7
Element 5: 11
The normal state of the series: 5 6 1 9 7 11
Changed locations of the directory: 11 7 9 1 6 5
*/

int main() {
    int number, *element1, j=1;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &number);
    int array[number];
    element1=array;
    while(element1 < array+number) {
        printf("Element %d: ", j);
        scanf("%d", element1);
        element1++;
        j++;
    }
    element1 = array;
    printf("---------------------------\nThe normal state of the series: ");
    while(element1 < array+number) {
        printf("%d ", *element1);
        element1++;
    }
    printf("\n---------------------------\nChanged locations of the directory: ");
    element1 = array+number-1;
    while(element1 >= array) {
        printf("%d ", *element1);
        element1--;
    }

    return 0;
}
