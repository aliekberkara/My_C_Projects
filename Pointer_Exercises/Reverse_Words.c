#include <stdio.h>
#include <stdlib.h>

/*
Enter 5 words:

word 1: benim
word 2: adim
word 3: can
word 4: boz
word 5: dur
mineb
mida
nac
zob
rud
*/

int main()
{
	char word[5][50], *first, *second, temp;
	int i = 0;
    printf("Enter 5 words:\n");
    while(i < 5){
		printf("Word %d: ", i+1);
		scanf("%s", word+i);
		i++;
    }
	i = 0;
	while(i < 5){
		first = second = word+i;
		while(*second){
			second++;
		}
		second--;

		while(first < second){
			temp = *first;
			*first = *second;
			*second = temp;
			first++;
			second--;
		}
		i++;
	}
		printf("--------------------------------\n");
		i = 0;
		while(i < 5){
			printf("Word %d : %s\n", i+1, *(word + i));
			i++;
		}

    return 0;
}
