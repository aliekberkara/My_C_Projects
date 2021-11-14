#include <stdio.h>
#include <stdlib.h>

/*
--> Define an array that holds 10 integer-type values.
--> Ask the user to enter all the elements of the array.
--> Find the largest and smallest elements of the array and print them to the screen. Use the 'for' structure.
*/

int main()
{
	int array[10], i, min, max;
	printf("------------------------\n");

	for(i = 0; i < 10; i++){
		printf("%d. element of array: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("------------------------\n");
	i = 0;
	max = min = array[i];
	printf("%d ", array[i]);
	for(i = 1;i < 10; i++){
		printf("%d ", array[i]);
		if(array[i] >= max){
			max = array[i];
		}
		if(array[i] <= min){
			min = array[i];
		}
	}
	printf("\n------------------------\nMin: %d   Max: %d", min, max);
	printf("\n------------------------");


    return 0;
}
