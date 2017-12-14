/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 13/12/2017
Desc	: Input an array variables and search a number
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declarations
int index;
int num[99];
int i;     // loop var
int find;
int flag;

// Function prototypes
void input(int n);
void search(void);

int main(void) {
	// set initial value
	index = 0;

	input(3);
	search();

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void input(int n) {
	// input 3 values at a time
	while (index < n) {
		printf("Index [%d]: ", index);
		scanf("%d", &num[index]);
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

void search() {
	printf("\nCari angka: ");
	scanf("%d", &find);
	for (i = 0; i < index; i++) {
		if (num[i] == find) {
			printf("%d ditemukan di index ke-%d\n", find, i);
			flag = 1;
		}	
	}

	// if number is not found, tell the user
	if (!flag) {
		printf("Data tidak ditemukan\n");
	}
}