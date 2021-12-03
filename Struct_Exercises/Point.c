#include <stdio.h>
#include <stdlib.h>

/*
- Create a struct named 'Point'. ABS (location on line X) ORD (location on line Y), make these values float type.
- Create a point named P.
- Assign the P point abs : 3 and ord : 2.
- Print the point p to the screen in printf.
*/

typedef struct{
float abs, ord;
}point;

int main()
{
	point P;
    P.abs = 3;
    P.ord = 2;
    printf("(x,y) = (%.1f, %.1f)\n-------------------", P.abs, P.ord);

    return 0;
}
