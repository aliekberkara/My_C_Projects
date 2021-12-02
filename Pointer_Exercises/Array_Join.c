#include <stdio.h>
#include <stdlib.h>

/*
- Write a program that asks the user for the number of elements of the array A and B in integer type,
and then asks the user to enter the elements.
- Print the A string to the screen.
- Print the B string to the screen.
- Add string B to the end of string A.

-The sample program is as follows:

Example Output:

Number of Elements of the First Array (max.50) :3
Element: 0 : 2
Element 1 : 5
Element 2 : 3
Number of Elements of the Second Array (max.50) : 6
Element 0 : 1
Element 1 : 5
Element 2 : 2
Element 3 : 4
Element 4 : 9
Element 5 : 5
DİZİ A:
253
DİZİ B:
152495
B appended to the end of A:
253152495
*/

int main()
{
    int sizeA, sizeB, *number1, *number2;
    printf("Number of Elements of the A Array (max.50) : ");
    scanf("%d", &sizeA);
    printf("----------------------------\n");
    printf("Number of Elements of the B Array (max.50) : ");
    scanf("%d", &sizeB);
    printf("----------------------------\n");

    int A[sizeA + sizeB], B[sizeB];

    number1 = A;
    while(number1 < A+sizeA){
		printf("Element %d : ", number1 - A + 1);
		scanf("%d", number1);
		number1++;
    }

    number2 = B;
	printf("\n----------------------------\n");
    while(number2 < B+sizeB){
		printf("Element %d : ", number2 - B + 1);
		scanf("%d", number2);
		number2++;
    }
	printf("\n----------------------------\nDizi A:\n");
	number1 = A;
	while(number1 < A + sizeA){
		printf("%d ", *number1);
		number1++;
	}
    number2 = B;
	while(number1 < A+sizeA+sizeB){
		*number1 = *number2;
		number2++;
		number1++;
	}
	printf("\n----------------------------\nDizi B:\n");
	number2 = B;
	while(number2 < B + sizeB){
		printf("%d ", *number2);
		number2++;
	}
	printf("\n----------------------------\nB appended to the end of A:\n");
	number1 = A;
	while(number1 < A + sizeA + sizeB){
		printf("%d ", *number1);
		number1++;
	}
	printf("\n----------------------------");


    return 0;
}
