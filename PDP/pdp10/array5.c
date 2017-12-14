/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Reserve a string
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	// Declarations
	char str[100];
	char temp;
	int pos = 0;
	int i, j = 0;

	// input
	printf("Enter a string: ");
	gets(str);

	// calculating string length
	while (str[pos] != '\0')
    	pos++;

	i = 0;
	j = pos - 1;

	// switching values
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
	    j--;
	}

	printf("\nReverse string: %s", str);

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */
