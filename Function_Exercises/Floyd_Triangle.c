#include <stdio.h>
#include <stdlib.h>

/*
The Floyd Triangle is a triangle of numbers designed by Robert Floyd.
A triangle can be defined as a right-sided right triangle, consisting of as many elements in each row,
and shaped by dividing consecutive counting numbers into rows:

 1
 2 3
 4 5 6
 7 8 9 10
*/

void floyd(int row){
    int i = 1, number = 1, temp;
    while(i <= row){
        temp = i;
        while(temp > 0){
            printf("%d ", number);
            number++;
            temp--;
        }
        printf("\n---------------\n");
        i++;
    }
}

int main()
{
    int row;
    printf("Enter a row number: ");
    scanf("%d", &row);

    floyd(row);

    return 0;
}
