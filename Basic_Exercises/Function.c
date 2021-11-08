#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter 'x' Real Number: ");
    scanf("%f", &x);

    y = pow(x, 3) + 13 * pow(x, 2) + 47 * x + 5;

    printf(">> f(%.3f) = %.3f", x, y);
    return 0;
}
