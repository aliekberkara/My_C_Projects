#include <stdio.h>
#include <stdlib.h>

/*
A teacher gave a 10-question multiple-choice exam to a class of 30 students.
In this exam, each question has 4 options (A B C D) and 4 wrongs lead to a right. In this program,
define a structure containing a student's school number and answers,
and have each student's school number and answers read into this structure string.
Then, read the answer key prepared by the teacher into a string of characters and calculate the grade each student gets out of 10.
Keep the calculated exam result with the school number of each student in another structure string and display the results
on the screen.
*/

typedef struct{
	int school_no;
	char answers[10];
}exam;

typedef struct{
	int school_no, exam_point;
}point;

int main()
{
    exam students[30];
    point student[30];
    char answer_key[10];
    int wrong = 0;

    int i = 0, j;
    while(i < 30){
		printf("School No: ");
		scanf("%d", &students[i].school_no);
		printf("-----------------------------\nAnswers\n-----------------------------\n");
		j = 0;
		while(j < 10){
			printf("Question %d: ", j+1);
			scanf("%s", &students[i].answers[j]);
			printf("\n");
			j++;
		}
		printf("---------------------------\n");
		i++;
    }
    i = 0;
    printf("Answer Key: \n");
    while(i < 10){
		printf("Answer %d: ", i+1);
		scanf("%s", &answer_key[i]);
		i++;
    }

    printf("------------------------\nExam Results: \n");
    i = 0;
    while(i < 30){
		student[i].exam_point = 10;
		j = 0;
		wrong = 0;
		while(j < 10){
			if(students[i].answers[j] != answer_key[j]){
				wrong += 1;
			}
			j++;
		}
		wrong += wrong / 4;
		student[i].school_no = students[i].school_no;
		student[i].exam_point -= wrong;

		printf("School No: %d  Exam Point: %d\n---------------------------\n", student[i].school_no, student[i].exam_point);


		i++;
    }

    return 0;
}
