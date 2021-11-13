#include <stdio.h>
#include <stdlib.h>

/*
N and K integers are entered into the A and B strings entered by the user, respectively.
Write a C program that enables these two arrays to be combined into a single array, using the function prototype below.

void join_array(int A[ ], int B[ ], int C[ ], int N, int K)
*/

void join_array(int number1, int number2, int array1[], int array2[], int array3[]){
    int i = 0, number3 = number1 + number2, temp;
    while(i < number1){
        array3[i] = array1[i];
        i++;
    }
//--------------------------------------------------
    temp = i;
    i = 0;
    while(i < number2){
        array3[temp] = array2[i];
        i++;
        temp++;
    }
//--------------------------------------------------
    array3[temp] = '\0';
    i = 0;
    while(i < number3){
        printf("%d ", array3[i]);
        i++;
    }
}

int main()
{
    int number1, number2, i = 0, number3 = number1 + number2;
    printf("Enter the number of elements of the first and second array: ");
    scanf("%d %d", &number1, &number2);
    int array1[number1], array2[number2], array3[number1 + number2];
    printf("Enter the elements of the first array: ");
    while(i < number1){
        scanf("%d", &array1[i]);
        i++;
    }
    printf("Enter the elements of the second array: ");
    i = 0;
    while(i < number2){
        scanf("%d", &array2[i]);
        i++;
    }
//------------------------------------------
    printf("-----------------------\n");
    i = 0;
    while(i < number1){
        printf("%d ", array1[i]);
        i++;
    }
//------------------------------------------
    printf("\n-----------------------\n");
    i = 0;
    while(i < number2){
        printf("%d ", array2[i]);
        i++;
    }
    printf("\n-----------------------\n");

    join_array(number1, number2, array1, array2, array3);
    return 0;
}
