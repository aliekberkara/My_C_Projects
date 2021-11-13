#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that converts a value entered by the user as seconds into "hour:minute:second(hh:mm:ss)" format using a function.
*/

void convert_time(int time){
    int hour, minute, second;
    minute = time / 60;
    second = time % 60;
    hour = minute / 60;
    minute %= 60;
    printf("%d second = %d hour : %d minute : %d second", time, hour, minute, second);
}

int main()
{
    int time;
    printf("Please enter the seconds you want to convert: ");
    scanf("%d", &time);

    convert_time(time);
    return 0;
}
