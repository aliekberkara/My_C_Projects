#include <stdio.h>
#include <stdlib.h>

/*
--> Write 2 functions.
--> Function 1: Indicates that the entered number is a multiple of 2.
--> Function 2: Indicates that the entered number is a multiple of 3.
--> Write a C program using these two functions. Let this program determine whether the value entered by
the user is even, whether it is a multiple of 3 and whether it is a multiple of 6, and prints it on the screen.
--> Call these functions with the variable address and write the program.

Example Output:

Enter a Number: 9
The Number you entered is a multiple of 3.
------------------------------------------
Enter a Number: 12
The Number you entered is an Even Number.
The Number you entered is a multiple of 3.
*/

int multiple_two(int *number){
	if(*number % 2 == 0){
		number = 1;
		return number;
	}
	else{
		return 0;
	}
}

int multiple_three(int *number){
	if(*number % 3 == 0){
		number = 1;
		return number;
	}
	else{
		return 0;
	}
}

int main()
{
	int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(multiple_two(&number) == 1){
		printf("The Number you entered is an Even Number.\n");
		 if(multiple_three(&number) == 1){
			printf("The Number you entered is a multiple of 3\n");
			printf("The Number you entered is a multiple of 6.");
		}
    }
    else if(multiple_three(&number) == 1){
			printf("The Number you entered is a multiple of 3");
    }
    return 0;
}
