#include <stdio.h>
#include <stdlib.h>

/*
Using this equation c(i,j) = c(i-1,j) + c(i-1,j-1), construct the following matrix.

Example Output:

How many columns would you like to enter: 12

 P		 0	 1	 2	 3	 4	 5	 6	 7	 8 	 9	 10	  11
 n
--------------------------------------------------------
 0 --	 1
 1 --	 1	 1
 2 --	 1	 2	 1
 3 --	 1	 3	 3	 1
 4 --	 1	 4 	 6	 4	 1
 5 --	 1	 5	10	10	 5	 1
 6 --	 1	 6	15	20	15	 6	 1
 7 --	 1	 7	21	35	35	21   7	 1
 8 --	 1	 8	28	56	70	56  28	 8	 1
 9 --	 1	 9	36	84 126 126  84	36	 9	 1
10 --	 1	10	45 120 210 252 210 120  45	10	 1
11 --	 1	11	55 165 330 462 462 330 165	55	11	 1
*/

int main()
{
	int column, i = 0, j = 0;
    printf("How many columns would you like to enter: ");
    scanf("%d", &column);
    int array[column][column];

    printf("P    ");
        while(i < column){
			printf("%4d ", i);
			i++;
		}
    printf("\nn\n");
    i = 0;
    while(i <= column){
		printf("-----");
		i++;
    }
    i = 0;
    printf("\n");
	while(i < column){
		printf("%2d --", i);
		j = 0;
		while(j <= i){
			if(j == i || j == 0){
				array[i][j] = 1;
			}
			else{
				array[i][j] = array[i-1][j] + array[i-1][j-1];
			}
			printf("%4d ", array[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 0;
    while(i <= column){
		printf("-----");
		i++;
    }
    return 0;
}
