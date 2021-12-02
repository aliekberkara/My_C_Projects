#include <stdio.h>
#include <stdlib.h>

/*
Ask the user to enter a value between 1 and 7. These values indicate the days of the week.
Write a 7-character string, that is, a pointer holding the days of the week. If the user does not enter a value between 1 and 7,
ask to enter the value again.
*/

int main()
{
	char *days[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int i;
	do{
		printf("Enter a value from 1-7: ");
		scanf("%d", &i);
	}
	while(i<1 || i>7);
    printf("-----------------------\n%s\n-----------------------", days[i-1]);
    return 0;
}
