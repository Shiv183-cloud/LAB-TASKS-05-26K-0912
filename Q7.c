/* Task 7: University Result Card
Extend Example 2 (the country-listing program) style of thinking to a university context. Write a program
where the outer switch selects a department using a character ('C' for Computer Science, 'E' for Electrical
Engineering, 'B' for Business). Inside each department's case, use an inner switch on a semester number (1,
2, or 3) to print the name of one core course offered that semester in that department. Include a default case
at both levels for invalid input */

#include <stdio.h>
int main() {
	char depart;
	int sem ;
	printf("Enter C for Computer Science , Enter E for Electrical Engineering , Enter B for Business! ");
	scanf(" %c",&depart);
	printf("Enter your Semester: ");
	scanf("%d",&sem);
	switch(depart) {
		case 'C' :
			switch(sem) {
			
				case 1 :
					printf("We Offer Introduction to Programming as a Core Course! ");
					break;
				case 2 :
					printf("We Offer Data Structures & Algorithms as a Core Course! ");
					break ;
				case 3 :
					printf("We Offer Database Systems as a Core Course! ");
				default:
					printf("Invalid Semester!");
			}
			break;
		case 'E' :
			switch(sem) {
			
				case 1 :
					printf("We Offer Circuit Analysis I as a Core Course! ");
					break;
				case 2 :
					printf("We Offer Circuit Analysis II as a Core Course! ");
					break ;
				case 3 :
					printf("We Offer Digital Logic Design as a Core Course! ");
				default:
					printf("Invalid Semester!");
			}
			break;
		case 'B' :
			switch(sem) {
			
				case 1 :
					printf("We Offer Principles of Management as a Core Course! ");
					break;
				case 2 :
					printf("We Offer Financial Accounting as a Core Course! ");
					break ;
				case 3 :
					printf("We Offer Marketing Management as a Core Course! ");
				default:
					printf("Invalid Semester!");
			}
			break;	
		default:
			printf("Invalid Department Entered! ");
	}
	return 0 ;
}
