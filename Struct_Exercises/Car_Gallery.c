#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
- Define a struct type named car for the gallery owner.
The first element in this structure should hold whether the car is sold or not.
It will take the value 1 if the car is sold, and 0 if not.
The second element should be defined in the union type, and the sales value should be kept if the car was sold,
and the brand of the car if not.

- Define the variable car_A in the struct type car.

- Assign the information of the unsold "Anadol" brand car to the variable car_A.

- When the "Anadol" brand car is sold for 20000 TL, make the necessary updates in the car_A variable.
*/

struct car{
	int isSold;
	union{
		double price;
		char trademark[20];
	}info;
};

int main()
{
    struct car car_A;
    int i = 1;
	while(i == 1){
		printf("Is the car sold? (Yes: 1, No: 0): ");
		scanf("%d", &car_A.isSold);
		if(car_A.isSold == 0){
			car_A.info.price = 0;
			strcpy(car_A.info.trademark, "Anadol");
			i = 0;
		}
		else if(car_A.isSold == 1){
			car_A.info.price = 200000;
			strcpy(car_A.info.trademark, "None");
			i = 0;
		}
		else{
			printf("---------------------------\nPlease enter 1 or 0.\n---------------------------\n");
		}
	}
	printf("---------------------------\nCar Price: %.1f\n", car_A.info.price);
	printf("Car Trademark: %s", car_A.info.trademark);

	return 0;
}
