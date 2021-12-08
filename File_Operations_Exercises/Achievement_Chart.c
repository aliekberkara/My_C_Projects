#include <stdio.h>
#include <stdlib.h>

/*
Write the C program that calculates the course grade information and average of N students using the structure
given below and writes it to the lessons.txt file.

Midterm 1: 20% 		struct student{
Midterm 2: 20% 			char name_surname[30];
Final: 60% 				char lesson[20];
						int midterm1, midterm2, final_grade;
					}
*/

typedef struct exam{
	char name_surname[30];
	char lesson[20];
	float midterm1, midterm2,final_grade, average;
}Student;

int main()
{
	int number, i = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    Student person[number];

    printf("---------------------\n");
    while(i < number){
		fflush(stdin);
		printf("Student's name and surname: ");
		gets(person[i].name_surname);
		printf("Student's Lesson: ");
		gets(person[i].lesson);
		printf("1st Midterm Grade: ");
		scanf("%f", &person[i].midterm1);
		printf("2nd Midterm Grade: ");
		scanf("%f", &person[i].midterm2);
		printf("Final Grade: ");
		scanf("%f", &person[i].final_grade);
		printf("-----------------------------------\n");

		person[i].average = (float) person[i].midterm1*0.2 + (float) person[i].midterm2*0.2 + (float) person[i].final_grade*0.6;
		i++;
    }

    FILE *file;
    file = fopen("Achievement_Chart.txt", "w");
    if(file == NULL){
		printf("Failed to Create File.");
    }
    else{
		fprintf(file, "-----------------------------------\n");
		fprintf(file, "Name and Surname        Lesson        1st Midterm        2nd Midterm        Final Grade        Average\n");
		fprintf(file, "----------------      ----------      -----------        -----------        -----------        -------\n");

		i = 0;
		while(i<number){
			fprintf(file, "%10s           %9s           %5.2f              %7.2f          %9.2f         %8.2f\n", person[i].name_surname, person[i].lesson, person[i].midterm1, person[i].midterm2, person[i].final_grade, person[i].average);
			fprintf(file, "-----------------------------------\n");
			i++;
		}

    }
    fclose(file);
		printf("Name and Surname        Lesson        1st Midterm        2nd Midterm        Final Grade        Average\n");
		printf("----------------      ----------      -----------        -----------        -----------        -------\n");
		i = 0;
		while(i < number){
			printf("%10s           %9s           %5.2f            %7.2f          %9.2f         %8.2f\n", person[i].name_surname, person[i].lesson, person[i].midterm1, person[i].midterm2, person[i].final_grade, person[i].average);
			printf("-----------------------------------\n");
			i++;
		}
    return 0;
}
