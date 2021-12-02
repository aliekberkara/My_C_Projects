#include <stdio.h>
#include <stdlib.h>

/*
- Define values from 0 to 14 in array.
- Print the even numbers in the array to the screen.
- Press the odd numbers in the array to the screen.
- Write the program using pointers.
*/

int main()
{
    int array[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, *i;

    i = array;
    while(i < array + 15){
		printf("%d ", *i);
		i++;
    }
	printf("\n----------------------------\n");
    i = array;
    while(i < array + 15){
		if(*i % 2 == 0){
			printf("%d ", *i);
		}
		i++;
    }
    i = array;
    printf("\n----------------------------\n");
    while(i < array + 15){
		if(*i % 2 == 1){
			printf("%d ", *i);
		}
		i++;
    }
    return 0;
}
