#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
In an ice skating match, a competitor's performance is evaluated by 10 judges, scoring over 6.00.
The performance score of the competitor is calculated by discarding the lowest and highest score given by the referees,
and taking the arithmetic average of the remaining scores.
In the program you will write, calculate the name, surname, performance score of the competitor and display it on the screen.
Calculate the performance in a single parameter function.
This function should take the competitor's structure as a parameter and return the performance score by calculating it.
*/

typedef struct {
	char name[10], surname[10];
	float performance_score, referee[10];
}competitor;

int Calculate_Performance_Score(competitor person){

	int i;
	float *max, *min, sum = 0;
	max = min = person.referee;
	i = 1;
	while(i<10){
		if(*(person.referee+i)>*max){
			max = (person.referee+i);
		}
		if(*min > *(person.referee+i)){
			min = (person.referee+i);
		}
		sum += *(person.referee+i);
		i++;
	}
	sum -= *max + *min;
	person.performance_score = sum / 8;
	return person.performance_score;
}

int main()
{
	int i = 0;
	competitor person;
	printf("Competitor Name: ");
	scanf("%s", &person.name);
	printf("Competitor Surname: ");
	scanf("%s", &person.surname);

	srand(time(NULL));
	printf("Referee Points:\n");
	while(i < 10){
		*(person.referee+i) = rand()%6 + 1;
		printf("%.1f ", *(person.referee+i));
		i++;
	}

	person.performance_score = Calculate_Performance_Score(person);

	printf("\n------------------------\nCompetitor Name: %s\nCompetitor Surname: %s\nCompetitor Performance Score: %.2f\n------------------------", person.name, person.surname, person.performance_score);
    return 0;
}
