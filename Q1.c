/* Task 1: Grading System
Write a C program that takes a student's marks (0–100) as input. Using nested if-else statements, determine
the grade as follows: if marks are 90 or above, print Grade A; else if 75 or above, print Grade B; else if 60
or above, print Grade C; else if 40 or above, print Grade D; otherwise print Fail. Additionally, within the
Grade A branch, use a further nested if to check if the marks are exactly 100 and print 'Perfect Score!' in
that case. */

#include <stdio.h>
int main() {
	int marks;
	printf("Enter your marks! ");
	scanf("%d",&marks);
	if (marks>=90 && marks <= 100) {
		if (marks == 100) {
			printf("Perfect Score!\n");
		}
		printf("Grade A");
	}
	else if (marks>=75 && marks < 90) {
		printf("Grade B");
	}
	else if (marks>=60 && marks<75) {
		printf("Grade C");
	}
	else if (marks >= 40 && marks < 60) {
		printf("Grade D");
	}
	else {
		printf("Fail");
	}

	return 0 ;
}
