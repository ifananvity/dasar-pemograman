/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Input an array variable and search the 2nd even number
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constants definition
#define MAX 10

// Declarations
int num[MAX];
int i;     // loop var
int evenCounter = 1;

// Function prototypes
void input(void);
void search(void);

int main(void) {
	input();
	search();

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void input() {
	printf("Enter 10 numbers: \n");

	for (i = 0; i < MAX; i++) {
		printf("Index [%d]: ", i);
		scanf("%d", &num[i]);
	}
}

void search() {
	printf("\n");
	for (i = 0; i < MAX; i++) {
		if (num[i] % 2 == 0) {
			if (evenCounter == 2) {
				printf("%d ditemukan di index ke-%d\n", num[i], i);
			}
			evenCounter++;
		}	
	}

	// if number is not found, tell the user
	if (!evenCounter) {
		printf("Angka genap tidak ditemukan\n");
	}
}