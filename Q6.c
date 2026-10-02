/* Task 6: Simple Calculator with Mode Selection
Write a program using a nested switch-case structure. The outer switch should ask the user to select a mode:
'1' for Basic Arithmetic or '2' for Power/Root operations. If mode '1' is selected, use an inner switch on an
operator character ('+', '-', '*', '/') to perform the corresponding operation on two numbers. If mode '2' is
selected, use an inner switch to choose between computing a square (case 's') or a square root (case 'r') of a
number, using the math library where needed. */

#include <stdio.h>
#include <math.h>
int main() {
	float num1,num2,Answer,SqRoot1,SqRoot2;
	int mode;
	char op;
	printf("Enter the First Number: ");
	scanf("%f",&num1);
	printf("Enter the Second Number: ");
	scanf("%f",&num2);
	printf("Enter 1- Basic Arithmetic   Enter 2- Power/Root Operations ");
	scanf("%d",&mode);
	switch(mode) {
		case 1 :
			printf("Enter your Operator + or - or / or * ");
			scanf(" %c",&op);
			switch(op) {
				case '+' :
					Answer = num1 + num2 ;
					break ;
				case '-' :
					Answer = num1 - num2 ;
					break ; 
				case '*' :
					Answer = num1 * num2 ;
					break ;
				case '/' :
					Answer = num1/num2 ;
					break ;
				default :
					printf("You have Entered an Invalid Operator!");
			}
			break;
		case 2 :
			printf("Enter your Operator s or r!");
			scanf(" %c",&op);
			switch(op) {
				case 's' :
					Answer = pow(num1,num2);
					break ;
				case 'r' :
					SqRoot1 = sqrt(num1);
					SqRoot2 = sqrt(num2);
					printf("Answer for Square Root for First Number is: %.2f\n",num1);
					printf("Answer for Square Root for Second Number is: %.2f\n",num2);
					break ;
			}
			break ;
		default:
			printf("You have Entered an Invalid Operator! ");
	}
	printf("Your Answer is! %.0f",Answer);
	return 0 ;
	
}
