#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int min, max;
    printf("Enter Three Different Numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }

    printf("Smallest: %d\nBiggest: %d", min, max);

    return 0;
}
