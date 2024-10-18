#include <stdio.h>
#include "WeeksNDays.h"

// EvanT - prog71990xf24 - assignment 2 refactor - defining weeksNDays

int weeksNDays(int daysEntered) {
	
		int weeks = (daysEntered / WEEK); // takes the FULL number of daysEntered divided by WEEKS
		int days = (daysEntered % WEEK);  // takes the REMAINDER of daysEntered divided by WEEKS

		printf("\n%d day(s) is:  %d week(s) and %d days(s)\n", daysEntered, weeks, days);

}