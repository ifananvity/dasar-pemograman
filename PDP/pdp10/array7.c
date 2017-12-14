/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Input an array variable and search the last odd number
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
int numFound;
int index;
int flag = 0;

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
		if (num[i] % 2 != 0) {
			numFound = num[i];
			index = i;
			flag = 1;
		}
	}

	if (!flag) {
		printf("Angka ganjil tidak ditemukan\n");
	} else {
		printf("%d ditemukan di index ke-%d\n", numFound, index);
	}
}