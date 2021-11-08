#include <stdio.h>
#include <stdlib.h>
#define PRICE 0.08
/*
A telephone company has determined that the cost of talking on the phone for up to 3 minutes is 0.25 TL.
However, if the talk time exceeds 3 minutes, the company charges 0.08 TL for every minute after that.
Write a C program that takes the duration of the phone call in minutes as input and calculates the cost of the call.

Example Output:

Phone Conversation Time: 8.0 minutes
Fee: 0.65 TL
*/

int main()
{
    float minute, fee;
    printf("Phone Conversation Time: ");
    scanf("%f", &minute);

    if(minute <= 3.00){
        printf("Your Fee: 0.25 TL");
    }
    else{
        minute -= 3.00;
        fee = 0.25 + minute * PRICE;
        printf("Your Fee: %.2f TL", fee);
    }
    return 0;
}
