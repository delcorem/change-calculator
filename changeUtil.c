#include "changeUtil.h"

/* Calculates the change in terms of dollars, quarters, dimes, nickels, and pennies.
 * 'dollarsOwed' is the money the user needs to pay in dollars, 'dollarsPaid' is the money 
 * the user paid in dollars, and 'change' is an array of the change due [Dollars, quarters, dimes, nickels, pennies].
 */
void calcChange(double dollarsOwed, double dollarsPaid, int change[]) {
	
	// Finding money due to user in cents
	int centsDue = ((int)(dollarsPaid * 100) - (int)(dollarsOwed* 100));

	// Finding the number of each coin due then removing them from centsDue
	change[0] = centsDue / 100;
	centsDue = centsDue % 100;
	
	change[1] = centsDue / 25;
	centsDue = centsDue % 25;
	
	change[2] = centsDue / 10;
	centsDue = centsDue % 10;
	
	change[3] = centsDue / 5;
	centsDue = centsDue % 5;
	
	change[4] = centsDue / 1;
	centsDue = centsDue %1;
}
