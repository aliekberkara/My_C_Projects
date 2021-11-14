#include <stdio.h>
#include <stdlib.h>

/*
--> We have three products: Books, Food Essentials and Luxury.
--> The government imposes taxes on each of the three groups at different rates: 4.0% for Books, 5.6% for Basic Food,
19.6% for Luxury Product Range.
--> Each product has a code: Book's code: 0, Basic Food's code: 1, and Luxury Product's code: 2.
--> Write a C program that asks the user for the code and price of the product you want,
and then prints the final price to the screen using the switch case structure.
*/

int main()
{
	float book = 4.0/100.0, food = 5.6/100.0, lux = 19.6/100.0, price;
	int code;
    printf("---------------------\n0 --> Book\n1 --> Basic Food\n2 --> Luxury Product\n---------------------\nEnter a product: ");
    scanf("%d", &code);
    printf("Enter product's price: ");
    scanf("%f", &price);

    switch(code){
		case 0:{
			price += price * book;
			printf("\n-----------------------\nThe Price of the Product You Have Bought: %.2f TL\n-----------------------\n", price);

			break;
		}
		case 1:{
			price += price * food;
			printf("\n-----------------------\nThe Price of the Product You Have Bought: %.2f TL\n-----------------------\n", price);

			break;
		}
		case 2:{
			price += price * lux;
			printf("\n-----------------------\nThe Price of the Product You Have Bought: %.2f TL\n-----------------------\n", price);

			break;
		}
    }
    if(code > 2 || code < 0){
		printf("\n-----------------------\nINVALID CODE!!!\n-----------------------\n");
    }
    return 0;
}
