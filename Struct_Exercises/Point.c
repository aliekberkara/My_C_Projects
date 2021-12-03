#include <stdio.h>
#include <stdlib.h>

/*
- Create a struct named 'Point'. ABS (location on line X) ORD (location on line Y), make these values float type.
- Create a point named P.
- Assign the P point abs : 3 and ord : 2.
- Print the point p to the screen in printf.
*/

typedef struct{
	char name[10];
	float abs, ord;
}point;

void printScreen(point P[], int number){
	int i = 0;
	while(i < 5){
		printf("%s = (%.1f, %.1f)\n", P[i].name, P[i].abs, P[i].ord);
		i++;
	}
}

int main()
{
	point P[5] = {{"A", 5, 3}, {"B", 6, 5}, {"C", 9, 4}, {"D", 6, 1}, {"E", 3, 9}};
    printScreen(P, 5);

    return 0;
}
