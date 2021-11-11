#include <stdio.h>
#include <stdlib.h>
/*
Write a C program that performs the sum, difference,
multiplication and division of two integers entered from the keyboard using a function.
*/
int addition(int number1, int number2) {
    return number1 + number2;
}

int subtraction(int number1, int number2) {
    int result;
    if(number1 >= number2) {
        result = number1 - number2;
    } else {
        result = number2 - number1;
    }
    return result;
}

int multiplication(int number1, int number2) {
    return number1 * number2;
}

float division(float number1, float number2) {
    float result;
    if(number1 >= number2) {
        result = number1 / number2;
    } else {
        result = number2 / number1;
    }
    return result;
}


int main() {
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    int total = addition(number1, number2);
    int difference = subtraction(number1, number2);
    int multiply = multiplication(number1, number2);

    printf("Sum of two numbers: %d\nDifference of two numbers: %d", total, difference);
    printf("\nMultiplying two numbers: %d\nDivision of two numbers: %.2f", multiply, division(number1, number2));
    return 0;
}
