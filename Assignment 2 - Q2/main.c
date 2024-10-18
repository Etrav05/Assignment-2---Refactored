#include <stdio.h>
#include "PrintingTable.h"

// EvanT - prog71990xf24 - assignment 2 refactor - Q2

// Question 2: Display a table of numbers, squares and others
// o Specifications : 4.00 / 4.00 (The program works and meets all of the specifications.)
// o Readability + Design : 4.00 / 4.00 (The code is exceptionally well organized and readable due to the use of good variable names, 
//   data and function structure(demonstrating SRP, coupling and /or cohesion).The code utilizes provided interfaces(encapsulation, 
//   interface segregation).The code is designed 'defensively' (meaning garbage is kept out).The code allows for both effective testing 
//   and extension(OCP).)
// o Reusability : 3.00 / 4.00 (Most of the code could be reused in other programs or the following issues were noted : )
//   Having hard coded(magic) values in function limits reusability
// o Documentation : 3.50 / 4.00 (The documentation consists of embedded comment and some simple header documentation that is somewhat 
//   useful in understanding the code. or the following issues were noted : )
//   Incomplete top - of - file comment block(missing name, class, assignment#, etc)

int main(void) {
	printf("Enter your limits (between 5-25) starting with the LOWER limit then THEN the UPPER limit (seperated by the enter button): ");
	int lowerLimit, upperLimit;

	if (scanf_s("%d %d", &lowerLimit, &upperLimit) != 2 || lowerLimit < LOWER_LIMIT || lowerLimit > UPPER_LIMIT) { // making sure lowerLim is valid
		printf("Lower limit is incorrect");
		return 0;
	}

	if (upperLimit > UPPER_LIMIT || upperLimit < lowerLimit || upperLimit > UPPER_LIMIT) { // making sure upperLim is valid
		printf("Upper limit is incorrect");
		return 0;
	}

	printingTable(lowerLimit, upperLimit); // calling function with lowerLim and upperLim inputted

	return 0;
}

