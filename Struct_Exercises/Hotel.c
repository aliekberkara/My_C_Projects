#include <stdio.h>
#include <stdlib.h>

/*
- An organization company provides organization services to a group going to a fair abroad.
Customers have different selection alternatives.
Customers can get 15 Euros for breakfast or 35 Euros for dinner, or they can't get food service by paying nothing.
- It is not obligatory to get hotel service.
But for those who want to get hotel service, there are 2 hotel options.
Customers can stay for 75 Euros in a 2-star hotel or 100 Euros in a 3-star hotel.
In the hotel service, 2 people can benefit from the same room.
But when it is included in the meal, only the cost of the meal doubles.
- Define a struct named client. In the struct structure,
define the customer's name, surname, breakfast, dinner, hotel service,
and if he will get hotel service, define whether he will stay with his friend.
- Define 5 customers in the Main function. Enter all the information in the struct.
- If customers choose a 2-star hotel, write a function that prints the first and last name of the customer who chose this hotel.
- Write a function that counts people eating breakfast.
- Write a function that calculates the price customers will pay.
- Write a C program that prints the name, surname, number of breakfast and the price of the customers staying in a 2-star hotel.
*/

typedef struct {
    char surname[20];
    char name[20];
    int breakfast; //0 = no 1 = yes
    int dinner; // 0 = no 1 = yes
    int hotel;  //1 = no hotel 2 = 2 star 3 = 3 star
    int alone; // 0 = with friend 1 = alone
}participant;

void two_star(participant tab[4])
{
    int i;
    printf("Participants staying in a two-star hotel\n");
    for(i=0;i<4;i++)
    {
        if(tab[i].hotel==2)
        {
            printf("Surname: %s, Name : %s \n",tab[i].surname,tab[i].name);
        }
    }
    printf("---------------------------\n");
}

void breakfast(participant tab[],int *nb)
{
    int i;
    *nb=0;
    for(i=0;i<4;i++)
    {
        if(tab[i].breakfast==1)
        {
            *nb=*nb+1;
            if(tab[i].alone==0)
            {
                *nb=*nb+1;
            }
        }
    }
}
void bill(participant p,int *total)
{
    *total=0;
    if(p.breakfast==1)
        *total+=15;
    if(p.dinner==1)
        *total+=35;
    if(p.alone==0)
        *total*=2;
    if(p.hotel==2)
        *total+=75;
    if(p.hotel==3)
        *total+=100;
}

int main()
{
    int n;
    int m;
    participant Table[4]={{"boz","can",0,1,2,1},{"osman","haci",0,0,1,0},{"boze","jean",1,0,2,1},{"giy","jean",0,1,1,0}};
    two_star(Table);

    breakfast(Table,&n);
    bill(Table[2],&m);
    printf("Participants having breakfast : %d \n",n);
    printf("Invoice paid by the participant with the surname %s: %d ",Table[2].surname,m);
    printf("\n---------------------------\n");
    return 0;
}
