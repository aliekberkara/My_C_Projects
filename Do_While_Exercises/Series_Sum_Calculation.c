#include <stdio.h>
#include <stdlib.h>

/*
--> Ask the user to enter a value of n.
--> Calculate 1 + 1/2 + 1/3 + ......... + 1/n.
*/

int main()
{
	float number, total = 0.0;
	int i = 1;
    printf("Enter a number: ");
    scanf("%f", &number);

    do{
		if(i < number){
			printf("1/%d + ", i);
			total += 1.0/i;
		}
		else{
			total += 1.0/i;
			printf("1/%d = %.2f", i, total);
		}
		i++;
    }
    while(i <= number);
    return 0;
}
