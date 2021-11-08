#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit, number = 0, counter = 0;
    printf("Enter a Number Limit: ");
    scanf("%d", &limit);

    while(number <= limit){
        if(number % 17 == 0){
            printf(" %5d ", number);
            counter++;
            if(counter % 10 == 0){
            printf("\n");
            }
        }
        number++;
    }

    return 0;
}
