#include <stdio.h>
#include <stdlib.h>

/*
Write the C program with the help of the recursive function,
which allows the prime numbers up to an N positive integer entered from the keyboard to be listed on the screen.
*/

int Is_Prime(int number,int i)
{
    if(i==1)
    {
        return 1;
    }
    else if(number%i==0)
    {
        return 0;
    }
    else
    {
        Is_Prime(number,i-1);
    }
}




int main()
{


    int number,i,control;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("-----------------------------\n");
    for(i=2;i<=number;i++)
    {
        control=Is_Prime(i,i/2);
        if(control==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
