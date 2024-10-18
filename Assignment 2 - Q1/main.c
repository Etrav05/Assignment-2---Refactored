#include <stdio.h>
#include "EnterToPlus16.h"

// EvanT - prog71990xf24 - assignment 2 refactor - Q1

// Question 1: Print a range of numbers
// o Specifications : 4.00 / 4.00 (The program works and meets all of the specifications.)
// o Readability + Design : 4.00 / 4.00 (The code is exceptionally well organized and readable 
//   due to the use of good variable names, data and function structure(demonstrating SRP, coupling and /or cohesion).
//   The code utilizes provided interfaces(encapsulation, interface segregation).The code is designed 
//   ‘defensively’(meaning garbage is kept out).The code allows for both effective testing and extension(OCP).)
// o Reusability : 3.00 / 4.00 (Most of the code could be reused in other programs or the following issues were noted : )
//   Having hard coded(magic) values in function limits reusability
// o Documentation : 3.50 / 4.00 (The documentation consists of embedded comment and some simple header documentation that 
//   is somewhat useful in understanding the code. or the following issues were noted : )
//   Incomplete top - of - file comment block(missing name, class, assignment#, etc)

int main(void) {

	printf("Enter an integer here: ");
	int userInput;

	if (scanf_s("%d", &userInput) != 1) {  // if the userInput is not = to 1 (an integer), then fail
		printf("Not a vaild integer");
		return 0;
	}

	printRange(userInput);  // call function and insert userInput

	return 0;
}