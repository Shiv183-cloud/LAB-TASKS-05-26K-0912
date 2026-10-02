/* Task 10: Bank Transaction Menu
Write a program simulating a simple ATM menu using nested switch-case statements. The outer switch
should let the user choose an account type: '1' for Savings or '2' for Current. Inside each account type's case,
use an inner switch to let the user choose a transaction: '1' for Deposit, '2' for Withdraw, or '3' for Check
Balance, and print a message describing the action performed for that specific account type and transaction
combination. Add default cases at both levels to handle invalid choices. */

#include <stdio.h>
int main() {
	int acctype,transac ;
	printf("Enter your Account Type, 1- Savings 2- Current ");
	scanf("%d",&acctype);
	printf("Enter your Transaction, 1- Deposit 2- Withdraw 3- Balance ");
	scanf("%d",&transac);
	switch(acctype) {
		case 1 :
			switch(transac) {
				case 1 :
					printf("Deposit completed successfully in your Savings Account.");
					break;
				case 2 :
					printf("Withdrawal completed successfully from your Savings Account.");
					break;
				case 3 :
					printf("Your Savings Account balance is displayed.");
					break;
				default:
					printf("Invalid transaction choice for Savings Account.");
			
			}
			break;
		case 2 :
			switch(transac) {
				case 1 :
					printf("Deposit completed successfully in your Current Account.");
					break;
				case 2 :
					printf("Withdrawal completed successfully from your Current Account.");
					break;
				case 3 :
					printf("Your Current Account balance is displayed.");
					break;
				default:
					printf("Invalid transaction choice for Current Account.");
			
			}
			break;
		default:
			printf("Invalid account type. Please select Savings or Current.");
			
	}
	return 0 ;
	
}
