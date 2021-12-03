#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Define a structure named student_information that holds the school number, name, surname and age of a student.
- Define student_1 and student_2 variables in student_information structure type.
- Assign the following student information to the student_1 variable.

School number: 522
Name: Can
Surname: Boz
Age: 18

- Copy the variable student_1 to the variable student_2.
*/

struct student_info{
int school_no;
char name[10];
char surname[10];
int age;
};

int main()
{
    struct student_info student_1;
    struct student_info student_2;
    student_1.school_no = 522;
    strcpy(student_1.name, "Can");
    strcpy(student_1.surname, "Boz");
    student_1.age = 18;

	student_2 = student_1;


    printf("School Number: %d\nName: %s\nSurname: %s\nAge: %d", student_2.school_no, student_2.name, student_2.surname, student_2.age);
	printf("\n-----------------------------------");
    return 0;
}
