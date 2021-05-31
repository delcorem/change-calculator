#include <stdio.h>
#include <stdbool.h>

#include "changeUtil.h"

// Author: Michael Delcore
int main(int argc, char** argv) {
	
	float moneyOwed = 0;
	float moneyPaid = 0;
	int change[5];
	int parseCount = 0;
	
	while(true) { // Loops until 'break', allows user to retry if an error occurs
	
		//Prompt user for the money they owe in dollars
		printf("Enter money owed: ");
		parseCount = scanf("%f", &moneyOwed);
		
		// Checking for incorrect input
		if(parseCount != 1) {
			
			fflush(stdin);
			printf("Incorrect input, please try again");
			continue;
		}
		
		//Prompt user for the money they paid in dollars
		printf("Enter money paid: ");
		scanf("%f", &moneyPaid);
		
	}
	
	
	
	
	
	printf("\n\nChange due: ");
	
	
	
}
