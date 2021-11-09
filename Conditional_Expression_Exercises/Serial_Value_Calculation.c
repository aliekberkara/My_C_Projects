#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a C program that takes a positive integer n and a real number x as input
and that calculates the series 1/x^2 + 3/x^4 + 5/x^6 + 7/x^8 + 2n-1/x^2n.

Sample Output

Positive Integer: 3
Real Number: 1.0
Series: 9.00
*/

int main()
{
    int n, i;
    float x, total;
    char continue1;
    do{
    printf("Enter a Positive Integer: \n");
    scanf("%d", &n);
    printf("Enter a Real Number: \n");
    scanf("%f", &x);

    if(n > 0){
        for(i = 1; i <= 2 * n - 1; i += 2){
        total += i/(pow(x, i+1));
        }
        printf("Total Of The Series: %.3f\n", total);
        printf("\nDo you want to continue (Evet: E/e)\n");
        scanf("%s", &continue1);
        printf("---------------------------\n");
    }
    else{
        printf("Invalid Number");
        }
    } while((continue1 == 'E') || (continue1 == 'e'));
    printf("See You!");

    return 0;
}
