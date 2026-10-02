/* Task 8: Restaurant Ordering System
Write a program that models a restaurant menu using nested switch-case statements. The outer switch
should let the user choose a category using a number: 1 for Beverages, 2 for Main Course, or 3 for Desserts.
Within each category's case, use an inner switch to let the user pick one of three specific items and print its
price. Make sure every switch (outer and inner) has a default case. */

#include <stdio.h>
int main() {
	int cate ;
	int choice ;
	float price;
	printf("Click 1 for Beverages , Click 2 for Main Course , Click 3 for Desserts ");
	scanf("%d",&cate);
	switch(cate) {
		case 1 :
			printf("You Have 3 Options in Beverages , 1- Cola Next , 2- Powerful Energy Drink , 3- Epic Stimulant Drink ");
			scanf("%d",&choice);
			switch(choice) {
				case 1 :
					price = 200.0 ;
					break ;
				case 2 :
					price = 300.0 ;
					break ;
				case 3 :
					price = 400;
					break ;
				default:
					printf("Invalid Option Entered! ");
			}
			break;
		case 2 :
			printf("You Have 3 Options in Main Course , 1- Pizza , 2- Burger , 3- Pasta ");
			scanf("%d",&choice);
			switch(choice) {
				case 1 :
					price = 500.0 ;
					break ;
				case 2 :
					price = 600.0 ;
					break ;
				case 3 :
					price = 700.0;
					break ;
				default:
					printf("Invalid Option Entered! ");	
			}
			break;
		case 3 :
			printf("You Have 3 Options in Desserts , 1- Kunnafa , 2- Custard , 3- Strawberry Tart ");
			scanf("%d",&choice);
			switch(choice) {
				case 1 :
					price = 800.0 ;
					break ;
				case 2 :
					price = 900.5 ;
					break ;
				case 3 :
					price = 1000;
					break ;
				default:
					printf("Invalid Option Entered! ");
			}
			break;	
		default:
			printf("ERROR Choose from Mentioned Category! ");
		
	}
	printf("The Price of item that you chose is %.0f",price);
	return 0 ;
}
