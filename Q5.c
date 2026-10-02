/* Task 5: Triangle Classifier
Write a program that accepts three sides of a triangle as input. First use a nested if-else check to determine
whether the three sides can actually form a valid triangle (the sum of any two sides must be greater than the
third). If valid, use further nested if-else statements to classify the triangle as Equilateral, Isosceles, or
Scalene. If not valid, print 'Not a valid triangle'. */

#include <stdio.h>
int main() {
	int side1,side2,side3;
	printf("Enter Side! \n");
	scanf("%d",&side1);
	printf("Enter Side! \n");
	scanf("%d",&side2);
	printf("Enter Side! \n");
	scanf("%d",&side3);
	
	if (((side1 + side2) > side3) || ((side1 + side3) > side2) || ((side3 + side2) > side1)) {
		if (((side1 == side2) == (side1 == side3))){
			printf("This Triangle is Equilateral");
		}
		else if (((side1 == side2) && (side1 != side3)) || ((side1 == side2) && (side1 != side3)) || ((side1 == side3) && (side1 != side2)) || ((side1 == side3) && (side3 != side2)) || ((side2 == side3) && (side2 != side1)) || ((side2 == side3) && (side3 != side1))) {
			printf("The Triangle is Isosceles");
		}
		else{
			printf("This Triangle is Scalene");
		}
	}
	else {
		printf("Not a Valid Triangle");
	}
	return 0 ;
}
