#include <stdio.h>
#include <stdlib.h>

/*
While the number of rabbits in a farm is 1042, the number of birds is 2272.
Rabbits multiply at a rate of 3.8% in a year, while birds reproduce at a rate of 1.2%.
Write a C program to find in how many years the rabbits will outnumber the birds.
*/

int main()
{
    int year = 0;
    float bird = 2272, rabbit = 1042;

    while(rabbit < bird){
        rabbit += rabbit * 0.038;
        bird += bird * 0.012;
        year++;
    }
    printf("--------------------\n");
    printf("The number of rabbits (%.0f) will exceed the number of birds (%.0f) in %d years.", rabbit, bird, year);
    printf("\n--------------------");

    return 0;
}
