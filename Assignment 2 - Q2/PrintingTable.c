#include <stdio.h>
#include <math.h>
#include "PrintingTable.h"

// EvanT - prog71990xf24 - assignment 2 refactor - defining function

double printingTable(int lowerLim, int upperLim) {

	printf("| #  |     cube     |   square   |    sqrt   |\n");

	int i = lowerLim;

	for (int i = lowerLim; i <= upperLim; i++) {

		float cube = (i * i * i);
		float square = (i * i);
		float squareRoot = (sqrt(i));

		printf("|----|--------------|------------|-----------|\n");

		if (i <= SINGLE_DIGIT)
			printf("| %d  | %f   | %f  | %f  |\n", i, cube, square, squareRoot);
		if (i >= DOUBLE_DIGIT && i < LARGE_DOUBLE_DIGIT)
			printf("| %d | %f  | %f | %f  |\n", i, cube, square, squareRoot);
		if (i >= LARGE_DOUBLE_DIGIT)
			printf("| %d | %f | %f | %f  |\n", i, cube, square, squareRoot);

	}

	printf("**********************************************");
}