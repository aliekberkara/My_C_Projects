#include <stdio.h>
#include <stdlib.h>
#define MILE 1.609

int main()
{
    float mile, km;
    printf("How Many Miles Has Your Car Traveled: ");
    scanf("%f", &mile);

    km = MILE * mile;

    printf("Your car has traveled %.3f km.", km);
    return 0;
}
