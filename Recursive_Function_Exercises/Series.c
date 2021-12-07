#include <stdio.h>
#include <stdlib.h>

/*
Write a C program using a recursive function to obtain a series whose start, end and increment values are entered from the keyboard.
For example, a series with a start 5 end 55 and an increment 7 would be 5,12,19,26,33,40,47,54.
*/

void Series(int start, int end, int increase){
	if(start <= end){
		printf("%d ", start);
		Series(start+increase, end, increase);
	}
}

int main()
{
	int start, end, increase;
    printf("Enter Start and End Values: ");
    scanf("%d %d", &start,&end);
    printf("Enter Amount of Increase:");
    scanf("%d", &increase);
    printf("-------------------------\n");

    Series(start, end, increase);
    return 0;
}
