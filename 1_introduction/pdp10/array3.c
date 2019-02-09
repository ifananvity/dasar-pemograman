/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Input an output array variables
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declarations
int index;
float num[99];
int i;     // loop var

// Function prototypes
void input(int n);
void output(void);

int main(void) {
	// set initial value
	index = 0;

	input(3);
	output();

	// pause the console
	printf("\n\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void input(int n) {
	// input 3 values at a time
	while (index < n) {
		printf("Index [%d]: ", index);
		scanf("%f", &num[index]);
		index++;
	}

	// input another 3 value if desired
	printf("Input lagi? (y/n) ");
	fflush(stdin);
	char again = getchar();
	if (again == 'y' || again == 'Y') {
		input(n+3);
	}
}

void output() {
	// output all values that the user has entered
	printf("\n");
	for (i = 0; i < index; i++) {
		printf("%.1f ", num[i]);	
	}
}