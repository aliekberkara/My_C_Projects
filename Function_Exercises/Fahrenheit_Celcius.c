#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that converts a value entered as Celsius to Fahrenheit, and a value entered as Fahrenheit to Celsius,
using a function.

F = (1.8*C)+32                 C = (5/9) * (F - 32)
*/

void convert_degree(float degree, char type){
    float fahrenheit, celcius;
    if(type == 'f' || type == 'F'){
        celcius = (5.0/9.0) * (degree - 32);
        printf("%.3f F --> %.3f C", degree, celcius);
    }
    else if(type == 'c' || type == 'C'){
        fahrenheit = (1.8*degree)+32;
        printf("%.3f C --> %.3f F", degree, fahrenheit);
    }
    else{
        printf("Invalid Type!!!");
    }
}

int main()
{
    char type;
    float degree;
    printf("Enter the value and the type to convert: ");
    scanf("%f %c", &degree, &type);

    convert_degree(degree, type);
    return 0;
}
