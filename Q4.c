/* Task 4: Electricity Bill Calculator
Write a program that reads the number of units of electricity consumed and the connection type ('D' for
domestic, 'C' for commercial). Using nested if-else, first check the connection type. Inside the domestic
branch, nest further if-else statements to apply different per-unit rates for usage ranges 0–100, 101–300,
and above 300 units. Do the same with different (commercial) rates inside the commercial branch. Print the
total bill. */

#include <stdio.h>
int main() {

	float price ;
	char contype ;
	float unitscons ; 
	printf("Enter the Connection Type: \n");
	scanf(" %c",&contype);
	printf("Enter the Units Consumed: \n");
	scanf("%f",&unitscons);
	if (contype == 'C') {
		if (unitscons >= 0 && unitscons <= 100) {
			price = unitscons * 50.20;
		}
		else if (unitscons >= 101 && unitscons<=300) {
			price = unitscons * 60.20 ;
		}
		else {
			price = unitscons * 70.20 ;
		}
	}	
	else {
		if (unitscons >= 0 && unitscons <= 100) {
			price = unitscons * 30.20;
		}
		else if (unitscons >= 101 && unitscons<=300) {
			price = unitscons * 40.20 ;
		}
		else {
			price = unitscons * 50.20 ;
		}
	}
	printf("Boss Your Final Bill is! %.2f",price);
	return 0 ;
	
}
