#include <stdio.h>
#include <stdlib.h>

int main()
{
    float square_meter;
    char type;
    printf("Enter Carpet Type and Square Meters: \n'T' : Twetty  18 TL\n'B' : Bugs  17 Tl\n'S' : Spiderman  19 TL\n");
    scanf("%c %f", &type, &square_meter);


    if(type == 'T'){
        printf("Carpet Type You Choose: Twetty, Amount Payable: %f", square_meter * 18);
    }
    else if(type == 'B'){
        printf("Carpet Type You Choose: Bugs, Amount Payable: %f", square_meter * 17);
    }
    else if(type == 'S'){
        printf("Carpet Type You Choose: Spiderman, Amount Payable: %f", square_meter * 19);
    }
    else{
        printf("Please Try Again!");
    }
    return 0;
}
