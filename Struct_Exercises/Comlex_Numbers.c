#include <stdio.h>
#include <stdlib.h>

/*
A complex number is a+ib where a is the real part of the number; The value b is the imaginary part.
Define a complex number as a structure consisting of real and imaginary parts.
Then take two complex numbers and the addition subtraction operator as input.
By doing the addition or subtraction, store the result in another variable defined in this structure and display it on the screen.

Example Output:

First complex number: 2.0 3.0
Second complex number: 5.0 -4.5
Operator (+/-): +
Result: 7.00-1.50i
*/

typedef struct {
	float real, imaginary;
}complex;

int main()
{	complex numbers1, numbers2, result;
	char operation;

    printf("First Complex Number: ");
    scanf("%f %f", &numbers1.real, &numbers1.imaginary);
    printf("Second Complex Number: ");
    scanf("%f %f", &numbers2.real, &numbers2.imaginary);
    printf("Operator(+/-): ");
    scanf("%s", &operation);
	int i = 1;
	while(i==1) {
    	if(operation == '+'){
			result.real = numbers1.real + numbers2.real;
			result.imaginary = numbers1.imaginary + numbers2.imaginary;
			i = 0;
		}
		else if(operation == '-'){
			result.real = numbers1.real - numbers2.real;
			result.imaginary = numbers1.imaginary - numbers2.imaginary;
			i = 0;
		}
		else{
			printf("Please enter '+' or '-'.");
		}
    }
	printf("%.2f", result.real);
	if(result.imaginary >= 0){
		printf(" + %.2fi", result.imaginary);
	}
	else{
		printf("%.2fi", result.imaginary);
	}
    return 0;
}
