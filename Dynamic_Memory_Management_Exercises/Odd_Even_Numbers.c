#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that keeps the odd and even numbers up to the N value entered by the user in different memory regions,
reads these numbers in different memory regions and lists them on the screen.
*/

int main()
{
	int number, i, *odd, *even, k = 0, j = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    odd = (int *) malloc(((number+1)/2)*sizeof(int));
    even = (int *) malloc(((number+2)/2)*sizeof(int));

    for(i = 0; i <= number; i++){
		if(i % 2 == 0){
			*(even+j) = i;
			j++;
		}
		else{
			*(odd+k) = i;
			k++;
		}
    }
    printf("--------------------\nOdd Numbers\n--------------------\n");
    for(i = 0; i<(number+1)/2; i++){
		printf("%d ", *(odd + i));
    }
    printf("\n--------------------\nEven Numbers\n--------------------\n");
	for(i = 0; i<(number+2)/2; i++){
		printf("%d ", *(even + i));
    }
	printf("\n--------------------\n");
	free(odd);
	free(even);
    return 0;
}
