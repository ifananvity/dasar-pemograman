/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Input an array variable
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constant definition
#define MAX 20

int main(void) {
	// Declarations
	int i;
	int bodyWeight[MAX];

	for (i = 0; i < MAX; i++) {
		printf("Index [%d]: ", i);
		scanf("%d", &bodyWeight[i]);
	}

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

