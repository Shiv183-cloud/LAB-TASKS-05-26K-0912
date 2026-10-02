/* Task 3: Largest of Four Numbers
Extend the largest-of-three-numbers example covered in the lab (Example 1) to work for four numbers X,
Y, Z, and W. Use nested if-else statements only (no logical AND/OR operators) to determine and print the
largest value among the four. */

#include <stdio.h>  // 1 2 3 4 
int main() {
	int X,Y,Z,W ;
	printf("Enter the First Number! ");
	scanf("%d",&X);
	printf("Enter the Second Number! ");
	scanf("%d",&Y);
	printf("Enter the Third Number! ");
	scanf("%d",&Z);
	printf("Enter the Fourth Number! ");
	scanf("%d",&W);
	if (X>Y) {
		if (X>Z) {
			if (X>W) {
				printf("The Largest Number is! %d",X);
			}
			else {
				printf("The Largest Number is! %d",W);
		
			}
		}
		else {
			if (Z > W) {
				if (Z > Y) {
					printf("The Largest Number is! %d",Z);
				}
				else {
					printf("The Largest Number is! %d",Y);
				}
			}
			else {
				printf("The Largest Number is! %d",W);
			}

		}
	}
	else {
		if (Y>W) {
			if (Y>Z) {
				printf("The Largest Number is! %d",Y);
			}
			else {
				printf("The Largest Number is! %d",Z);
			}
		}
		else {
			printf("The Largest Number! %d",W);
		}
	}
	return 0 ;
	
	
}

