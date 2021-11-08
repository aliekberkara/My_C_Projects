#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("1) Finding Length\n2)ASCII Comparison\n3) Merge\nChoose One:\n");
    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
 case 1:
    printf("Enter A Word: ");
    char word[10];
    scanf("%s",word);
    lenght(word);
    break;
 case 2:
     printf("Enter A Word: ");
     char word1[10];
     scanf("%s",word1);
     printf("Enter A Word: ");
     char word2[10];
     scanf("%s",word2);
     comparison(word1, word2);
     break;
 case 3:
     printf("Enter A Word:");
     char word3[10];
     scanf("%s",word3);
     printf("Enter A Word:");
     char word4[10];
     scanf("%s",word4);
     combine(word3, word4);
     break;
    }

    return 0;
}

int lenght(char word[10])
{
    printf("The Length of Our Character Line %d\n", strlen(word));
    printf("The Length of Our Character Line %d\n", sizeof(word));
}
int comparison(char word1[10], char word2[10])
{
    if (strcmp(word1, word2) > 0)
    {
        printf("According to ASCII Comparison %s is greater than %s.", word1, word2);
    }
    else if (strcmp(word1, word2) < 0)
    {
        printf("According to ASCII Comparison %s is greater than %s.", word2, word1);
    }
    else
    {
        printf("According to ASCII Comparison %s is Equal to %s.", word2, word1);
    }
}
int combine (char word1[10], char word2[10])
{
    strcat(word1, word2);

    printf("Combined: %s", word1);
}
