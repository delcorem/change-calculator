#include <stdio.h>
#include <stdbool.h>

#include "changeUtil.h"

/* Author: Michael Delcore
 * Date last modified: 03/06/2021
 *
 * A program that takes in the user's amount of money owed and the money they paid, 
 * and tells them how much change they are due and what coins in detail they owe 
 * (dollars, quarters, dimes, nickels, pennies).
 */
int main(int argc, char** argv) {
	
	double moneyOwed = 0;
	double moneyPaid = 0;
	double changeDue = 0;
	int change[5] = {0, 0, 0, 0, 0};
	int parseCount = 0;
	
	while(true) { // Loops until 'break', allows user to retry if an error occurs
	
		//Prompt user for the money they owe in dollars
		printf("Enter money owed: $");
		parseCount = scanf("%lf", &moneyOwed);
		
		// Checking for incorrect input
		if(parseCount != 1) {
			fflush(stdin);
			printf("Incorrect input, please try again.\n");
			continue;
		}
		else if(moneyOwed < 0.01) {
			printf("Can not owe a nothing or a negative value, please try again.\n");
			continue;
		}
		
		// Exits loop with successful input
		break;
	}

	while(true) { // Loops until 'break', allows user to retry if an error occurs
		
		//Prompt user for the money they paid in dollars
		printf("Enter money paid: $");
		parseCount = scanf("%lf", &moneyPaid);
		
		// Checking for incorrect input
		if(parseCount != 1) {
			fflush(stdin);
			printf("Incorrect input, please try again.\n");
			continue;
		}
		else if(moneyOwed > moneyPaid) {
			printf("Not enough money paid, please pay the full amount.\n");
			continue;
		}
		
		// Exits loop with successful input
		break;
	}
	
	// changeDue is the amount due to the user
	changeDue = moneyPaid - moneyOwed;
	
	// Rounding changeDue to two decimal points
	printf("\n\nChange due: $%.2lf", changeDue);
	
	// Calling calcChange to fill the change array
	calcChange(moneyOwed, moneyPaid, change);
	
	printf("\nDollars %d", change[0]);
	printf("\nQuarters %d", change[1]);
	printf("\nDimes %d", change[2]);
	printf("\nNickels %d", change[3]);
	printf("\nPennies %d", change[4]);
	
	return 0;
}
