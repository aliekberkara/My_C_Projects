#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, total = 0, i=1;

    printf("Enter A Number: ");
    scanf("%d", &number);

    while(i<=number) {
        total += i;
        printf("%d", i);
        if(i != number) {
            printf(" + ");
        }
        i++;
    }

    printf(" = %d", total);

    return 0;
}
