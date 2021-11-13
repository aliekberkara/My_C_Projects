#include <stdio.h>
#include <stdlib.h>

/*
Write the C program using a function that calculates the series given below up to the value entered by the user.

1^2 + 2^2 + 3^2 + 4^2
*/

int total_of_series(int number){
    int i = 1, total = 0;
    while(i <= number){
        total += i*i;
        i++;
    }
    return total;
}

int main()
{
    int number, i = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(i <= number){
        if(i < number){
            printf("%d^2 + ", i);
        }
        else{
            printf("%d^2 = %d", i, total_of_series(number));
        }
        i++;
    }
    return 0;
}
