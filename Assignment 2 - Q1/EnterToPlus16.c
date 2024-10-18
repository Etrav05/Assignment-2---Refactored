#include <stdio.h>
#include "EnterToPlus16.h"

// EvanT - prog71990xf24 - assignment 2 refactor - function definition

#define RANGE		16

int printRange(int a) {

	int rangeValue = a + RANGE; // set an end point

	while (a <= (rangeValue)) {  // while a is less than the end point, print a and increase by 1 every loop
		printf("%d\n", a++);
	}
}