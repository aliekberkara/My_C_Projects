#include <stdio.h>
#include <stdlib.h>

// Get Two Numbers from User.
// After you have multiplied these numbers, show the sign of the result.

int main()
{
    int number1, number2, sign;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &number1, &number2);

    if(number1 < 0 && number2 < 0 || number1> 0 && number2> 0){
        sign = +1;
        printf(">> sign(%d * %d) = +1", number1, number2);
    }
    else if(number1 < 0 && number2 > 0 || number1> 0 && number2 < 0){
        sign= -1;
        printf(">> sign(%d * %d) = -1", number1, number2);
    }
    else{
        sign = 0;
        printf(">> sign(%d * %d) = 0", number1, number2);
    }


    return 0;
}
