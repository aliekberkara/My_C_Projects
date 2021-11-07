#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, h;
    printf("Enter 'a', 'b' and 'h' Lengths of Rectangles Prism: ");
    scanf("%d%d%d", &a, &b, &h);
    int floor_area = a * b;
    int lateral_area = 2*a*h + 2*b*h;
    int total_area = lateral_area + floor_area;
    int volume = a*b*h;

    printf("Rectangles Prism;\n\tFloor Area: %d\n\tLateral Area: %d\n\tTotal Area: %d\n\tVolume: %d", floor_area,
           lateral_area, total_area, volume);
    return 0;
}
