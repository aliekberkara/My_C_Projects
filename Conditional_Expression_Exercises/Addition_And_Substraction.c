#include <stdio.h>
#include <stdlib.h>

/*
Write a C Program That Does the Following Operations.

--> Enter the Add(+) or Subtraction(-) operator.
--> 1/a + 1/b for the (+) operator; For the (-) operator, find the result of 1/a - 1/b operations in simple fractions.
--> If one of the entered a or b values is 0, indicate with a message that that operation cannot be performed.

Example Output:
Select Your Transaction((+)/(-)):
Enter Two Integers: 5 8
1/5 + 1/8 = 13/40
*/

int main()
{
    char transaction;
    int a, b;
    printf("Select Your Transaction((+)/(-)):");
    scanf("%c", &transaction);
    printf("Enter Two Integers:");
    scanf("%d %d", &a, &b);
    if(transaction == '+'){
        if(a == 0 || b == 0){
            printf("Division by Zero Error");
        }
        else{
        printf("1/%d + 1/%d = %d/%d", a, b, a+b, a*b);
        }

    }
    else if(transaction == '-'){
        if(a == 0 || b == 0){
            printf("Division by Zero Error");
        }
        else{
        printf("1/%d - 1/%d = %d/%d", a, b, a-b, a*b);
        }
    }
    else{
        printf("Invalid Transaction");
    }

    return 0;
}
