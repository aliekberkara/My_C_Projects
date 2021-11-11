#include <stdio.h>
#include <stdlib.h>

/* A number that has the sum of its positive divisors equal to itself is called a "perfect number".
For example, 6 is a perfect number. (1 + 2 + 3 = 6)

Accordingly, write a C program to find whether a number entered from the keyboard is a perfect number or not, using a function.
*/

int Is_Perfect(int number){
    int isPerfect = 0, i = 1, total = 0;
    while(i <= number/2){
        if(number % i == 0){
            total += i;
        }
        i++;
    }
    if(total == number){
        isPerfect = 1;
    }
    else{
        isPerfect = 0;
    }
    return isPerfect;
}

int main()
{
    int number, perfect;

    printf("Enter a number: ");
    scanf("%d", &number);

    perfect = Is_Perfect(number);
    if(perfect == 1){
        printf("-------------------\nThis number is a perfect number.\n-------------------");
    }
    else if(perfect == 0){
        printf("-------------------\nThis number is not a perfect number.\n-------------------");
    }
    return 0;
}
