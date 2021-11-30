#include <stdio.h>
#include <stdlib.h>

/*
Define an array with 10 integer-type elements and have the user enter these elements.
Find the largest and smallest value of the elements in the array with the help of the pointer. Write the program as follows.

Example:
Enter 10 elements:
1
2
5
8
11
5
6
85
42
49
Maximum value: 85
Minimum value: 1
*/

int main()
{
	int array[10], *i, *max, *min;
    printf("Enter 10 Elements:\n");
    i = array;
	while(i < array+10){
		scanf("%d", i);
		i++;
	}

    min = max = array;
	i = array+1;
	while(i<array+10){
		if(*i>*max){
			max = i;
		}
		if(*min > *i){
			min = i;
		}
		i++;
	}
    printf("Maximum Value: %d\nMinimum Value: %d", *max, *min);

    return 0;
}
