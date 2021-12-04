#include <stdio.h>
#include <stdlib.h>
#define N 2

/*
- Paired table tennis tournament is organized at the university.
- Each team has a name and each team consists of 2 players.
- Create a struct that holds the players' name, surname and age.
- Create a struct for teams that holds the name of the team, the first player and the second player.
- Write a function that defines the characteristics of the players
(call this function with the method of calling the address of the variable).
- Write a function that defines the characteristics of the teams
(call this function with the method of calling the address of the variable).
- Write two functions separately to print the players and teams you define to the screen.
- Write a C program that contains and suppresses N teams using the above functions.
*/

typedef struct {
    char surname[10];
    char name[10];
    int age;
    int level;
}player;

typedef struct {
    char name[10];
    player player1;
	player player2;
}team;
void create_player(player *j)
{
    printf("Enter Name: ");
    scanf("%s",j->name);
    printf("Enter Surname: ");
    scanf("%s",j->surname);
    printf("Enter Age: ");
    scanf("%d",&j->age);
    printf("Enter Level: ");
    scanf("%d",&j->level);
    printf("-------------------------\n");
}


void create_team(team *t)
{
    printf("Enter the name of the team: ");
    scanf("%s",t->name);
    printf("Player 1 : \n");
    create_player(&t->player1);
    printf("Player 2 : \n");
    create_player(&t->player2);

}
void print_team(team t)
{
    printf("Name: %s\n",t.name);
    printf("Player 1 :\n");
    print_player(t.player1);
    printf("Player 2 : \n");
    print_player(t.player2);

}
void print_player(player j)
{
    printf("Name : %s\n ",j.name);
    printf("Surname : %s\n ",j.surname);
    printf("Age : %d\n",j.age);
    printf("Level : %d\n",j.level);
	printf("\n-------------------------\n");
}


int main()
{
	team tab[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("Team %d : \n",i);
        create_team(&tab[i]);
    }
     printf("-------------------------\n");
    for(i=0;i<N;i++)
    {
        printf("Team %d :\n",i);
        print_team(tab[i]);
    }
    return 0;
}

