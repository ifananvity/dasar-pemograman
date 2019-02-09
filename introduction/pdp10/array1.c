/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Declare, initialize and print 3 array variables
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constant definition
#define MAX 10

int main(void) {
	int i;

	// declare and initialize array variables
	int   classrooms[MAX]  = {15, 18, 10, 23, 15, 11, 29, 14, 18, 27};
	float heights [MAX]    = {5.5, 6.1, 5.8, 5.3, 5.4, 6.8, 6.2, 5.1, 5.4, 6.3};
	char  lastName[MAX]    = "Mr. Jeff";

	// print classrooms
	for(i = 0; i < MAX; i++){
		printf("%d ", classrooms[i]);
	}
	printf("\n");

	// print heights
	for(i = 0; i < MAX; i++){
		printf("%.1f ", heights[i]);
	}
	printf("\n");

	// print last name
	printf("%s\n", lastName);

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

