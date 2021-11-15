#include <stdio.h>
#include <stdlib.h>

/*
--> Write a function.
--> This function; Let it perform addition, subtraction, multiplication and division.
Use the switch-case structure for (+ - * /) operations.
--> Write the C program that calls the above function with the address of the variable.
*/

float four_transactions(float *number1, float *number2, char *operation){
	float result;
	switch(*operation){
		case '+':{
			result = *number1 + *number2;
			break;
		}
		case '-':{
			if(*number1 >= *number2){
				result = *number1 - *number2;
				break;
			}
			else{
					result = *number2 - *number1;
					break;
			}
		}
		case '*':{
				result = (*number1)*(*number2);
				break;
		}
		case '/':{
			if(*number1 >= *number2){
				result = (float)*number1 / (float)*number2;
				break;
			}
			else{
				result = (float)*number2 / (float)*number1;
				break;
			}
		}
	}
	return result;

}

int main()
{
	float number1, number2, result;
	char operation;
	printf("Enter a operation(+-*/):");
    scanf("%c", &operation);
    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    result = four_transactions(&number1, &number2, &operation);
    if(number1 >= number2){
		printf("%.1f %c %.1f = %.2f", number1, operation, number2, result);
    }
    else{
		printf("%.1f %c %.1f = %.2f", number2, operation, number1, result);
    }
    return 0;
}
