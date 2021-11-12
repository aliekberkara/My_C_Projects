#include <stdio.h>
#include <stdlib.h>

/*
The prototype of the function that provides the average of the integers taken by the user in an array of N elements is given below.
Accordingly, write the C program using the following prototype.

float average(int *array, int size)
*/

float find_average(int *array, int size){
    int i = 0;
    float average, total = 0;
    while(i < size){
        total +=  array[i];
        i++;
    }
    average = total / size;
    return average;
}

int main()
{
    int number, i = 0;
    printf("Enter numbers of elements of the array: ");
    scanf("%d", &number);
    int array[number];
    printf("Enter the array elements: ");
    while(i < number){
        scanf("%d", &array[i]);
        i++;
    }
    i = 0;
    printf("---------------------\n");
    while(i < number){
        printf("%d ", array[i]);
        i++;
    }
    printf("\n---------------------\n");

    printf("Average of Series: %.2f\n---------------------", find_average(array, number));
    return 0;
}
