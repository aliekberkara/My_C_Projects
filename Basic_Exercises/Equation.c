#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, x;
    printf("Enter the 'a', 'b', 'c' and 'x' Values for the Equation.");
    scanf("%d%d%d%d", &a, &b, &c,&x);
    int y = (a*x*x) + (b*x) + c;

    printf("ax^2+bx+c = %d", y);

    return 0;
}
