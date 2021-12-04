#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write a C program that allows obtaining personnel information using the structure given below,
and listing personnel information in alphabetical order from A to Z according to personnel names after it is received.
void sort(persons x[],int m);
void list(persons x[],int m);
*/

typedef struct personnel{

    int password;
    char name[10];
    char surname[10];
    int age;
    float salary;
    char gender[10];

    }persons;


 void sort(persons x[],int m)
 {
     int i,j;
     persons t;
     for(i=0;i<m-1;i++)
     {
         for(j=i+1;j<m;j++)
         {
             if(strcmp(x[i].name,x[j].name)>0)
             {
                 t=x[i];
                 x[i]=x[j];
                 x[j]=t;
             }
         }
     }


 }

 void list(persons x[],int m)
 {
     int i;
     for(i=0;i<m;i++)
     {
         printf("Password: %d | Name: %s | Surname: %s | Age: %d | Salary: %.2f | Gender: %s\n",x[i].password,x[i].name,x[i].surname,x[i].age,x[i].salary,x[i].gender);
     }

 }

int main()
{
   int N;
   int i;
   printf("Enter a personnel numbers: ");
   scanf("%d",&N);
   persons p[N];
   printf("---------------------------\n");
   for(i=0;i<N;i++)
   {
       printf("Password : ");
       scanf("%d",&p[i].password);

       printf("Name : ");
       scanf("%s",&p[i].name);

       printf("Surname : ");
       scanf("%s",&p[i].surname);

       printf("Age : ");
       scanf("%d",&p[i].age);

       printf("Salary : ");
       scanf("%f",&p[i].salary);

       printf("Gender : ");
       scanf("%s",&p[i].gender);

       printf("---------------------------\n");


   }

    sort(p,N);
    list(p,N);




    return 0;
}
