/* Task 2: Ticket Pricing at a Cinema
A cinema charges different ticket prices based on age and day of the week. Take the customer's age and a
character for the day ('W' for weekday, 'H' for weekend/holiday) as input. Using nested if-else, if the age is
less than 12 or greater than 60, apply a discounted price; within that, check the day to decide between the
weekday-discount price and the weekend-discount price. If the age is between 12 and 60, do the same daybased check but using the regular weekday and weekend prices. Print the final ticket price.*/

#include <stdio.h>
int main() {
	int custage;
	char daychar;
	float price;
	/* assuming normal price to be 1000 and then discounted price for holiday or weekend for anyone older than 12 and less than 60 gets 10% discount 
	anyone older than 60 and younger than 12 gets 20% regardless and if its a holiday then they get additional 10% discount */
	printf("Enter the Customer's Age! ");
	scanf("%d",&custage);
	printf("Enter Character for the Day! ");
	scanf(" %c",&daychar);
	if (daychar == 'W'){
		if (custage>=12 && custage <= 60) {
			price = 1000 ;
		}
		else {
			price = 1000 - (1000*0.2);
		}
	}
	else if (daychar == 'H') {
		if (custage>=12 && custage <= 60) {
			price = 1000 - (1000*0.1) ;
		}
		else {
			price = 1000 - (1000*0.2);
			price = price - (price*0.1);
		}
	}

	printf("The Final Price is! %.2f",price);
	
	return 0 ;

}
