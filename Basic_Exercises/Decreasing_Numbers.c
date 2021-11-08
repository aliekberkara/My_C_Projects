#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter A Number: ");
    scanf("%d", &number);

    while(number > 0){
        printf("%d ", number);
        number--;
    }
    return 0;
}
