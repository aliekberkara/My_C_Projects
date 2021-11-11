#include <stdio.h>
#include <stdlib.h>

/*
The sequence of numbers formed as a result of the addition of each number with the number before it is called the
'Fibonacci Sequence'. Accordingly, write the C program using a function, which enables the generation of numbers
by entering the information on how many Fibonacci numbers will be generated from the keyboard.
*/

void fibonacci(int number){
    int sequence[number];
    int i = 2;
    sequence[0] = 1;
    sequence[1] = 1;
    printf("%d %d ", sequence[0], sequence[1]);

    while(i < number){
        sequence[i] = sequence[i-2] + sequence[i-1];
        printf("%d ", sequence[i]);
        i++;
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    fibonacci(number);
    return 0;
}
