#include <stdio.h>
#include <stdlib.h>

typedef enum
 {
   January=1,
   February,
   March,
   April,
   May,
   June,
   July,
   August,
   September,
   October,
   November,
   December

 }months;

void show_month(months month)
{
    switch(month)
    {
        case January:
        printf("January");
        break;
        case February:
        printf("February");
        break;
        case March:
        printf("March");
        break;
        case April:
        printf("April");
        break;
        case May:
        printf("May");
        break;
        case June:
        printf("June");
        break;
        case July:
        printf("July");
        break;
        case August:
        printf("August");
        break;
        case September:
        printf("September");
        break;
        case October:
        printf("October");
        break;
        case November:
        printf("November");
        break;
        case December:
        printf("December");
        break;
        default:
        printf("There is a no such month.");
        break;

    }
}

int main()
{
    months month = 5;
    show_month(month);
    return 0;
}
