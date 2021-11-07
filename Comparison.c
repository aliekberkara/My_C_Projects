#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter Two Numbers: \n");
    scanf("%d%d", &a, &b);

    if(a == b){
        printf("%d is Equal to %d.", a, b);
    }
    else{
        if(a > b){
            if(a % b == 0){
                printf("%d is Not Equal to %d.\n%d is Greater than %d.\n%d is Multiple of %d.", a, b, a, b, a, b);
            }
            else{
                printf("%d is Not Equal to %d.\n%d is Greater than %d.\n%d is Not a Multiple of %d.", a, b, a, b, a, b);
            }
        }
        else{
            if(b % a == 0){
                printf("%d Is Not Equal to %d.\n%d is Less Than %d.\n%d is Multiple of %d.", a, b, a, b, b, a);
            }
            else{
                printf("%d is Not Equal to %d.\n%d is Less Than %d.\n%d is Not a Multiple of %d.", a, b, a, b, b, a);
            }
        }
    }
    return 0;
}
