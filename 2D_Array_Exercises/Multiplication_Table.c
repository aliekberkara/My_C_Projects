#include <stdio.h>
#include <stdlib.h>

/*
Create a 10 x 10 times table and print it to the screen.

	I	 1	 2	 3	 4	 5	 6	 7	 8	 9	 10
--------------------------------------------------
	1 |  1   2	 3	 4	 5	 6	 7	 8	 9	 10
	2 |  2   4	 6	 8  10  12  14  16  18   20
	3 |  3   6	 9  12  15  18  21  24  27   30
	4 |  4   8  12  16  20  24  28  32  36   40
	5 |  5  10  15  20  25  30  35  40  45	 50
	6 |  6  12  18  24  30  36  42  48  54   60
	7 |  7  14  21  28  35  42  49  56  63	 70
	8 |  8  16  24  32  40  48  56  64  72	 80
	9 |  9  18  27  36  45  54  63  72  81 	 90
   10 | 10  20  30  40  50  60  70  80  90  100
*/

int main()
{
	int i = 0, j = 0;
	int array[10][10];

    printf("    I  ");
    while(i < 10){
		printf("%4d", i+1);
		i++;
    }
    i = 0;
    printf("\n");
    while(i < 10){
		printf("-----");
		i++;
    }
	i = 0;
	printf("\n");
    while(i < 10){
		j = 0;
		printf("   %2d |", i+1);
		while(j < 10){
			array[i][j] = (i+1) * (j+1);
			printf("%4d", array[i][j]);
			j++;
		}
		printf("\n");
		i++;
    }

    return 0;
}
