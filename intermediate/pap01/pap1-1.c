/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 4/3/2018
Desc    : Implement various functions
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Declaration
int i;
char operator[4] = "+-x/";
int operand1;
int operand2;
float hasil;

// Constants
#define SIZE 100

// Function prototypes
void print_identitas(void);
void print_jumlah(int num1, int num2);
float hitung(int num1, int num2, char operator);

int main(void) {
	srand(time(NULL)); // randomize seed

	print_identitas();

	print_jumlah(15, 12);
	print_jumlah(44, 29);
	puts("");

	i = 0;
	while (i < 4) {
		operand1 = rand() % SIZE; // returns a pseudo-random integer between 0 and 99
		operand2 = rand() % SIZE;
		printf("%d %c %d = %.2f\n", operand1, operator[i], operand2, hitung(operand1, operand2, operator[i]));
		i++;
	}

	/*
	hasil = hitung(12, 15, '+');
	printf("%d %c %d = %f\n", 12, '+', 15, hasil);
	hasil = hitung(12, 15, '-');
	printf("%d %c %d = %.2f\n", 12, '-', 15, hasil);
	hasil = hitung(12, 15, 'x');
	printf("%d %c %d = %.2f\n", 12, 'x', 15, hasil);
	hasil = hitung(12, 15, '/');
	printf("%d %c %d = %.2f\n", 12, '/', 15, hasil);
	*/

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void print_identitas() {
	printf("=================================\n");
	printf("NIM : A11.2017.10629\n");
	printf("Nama Lengkap : Tifan Dwi Avianto\n");
	printf("Alamat : Semarang Utara, Semarang\n");
	printf("=================================\n\n");
}

void print_jumlah(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	//int result = num1 + num2;
	//printf("%d + %d = %d\n", num1, num2, result);
}

float hitung(int num1, int num2, char operator) {
	float result;

	switch (operator) {
		case '+' : {
			result = num1 + num2;
			break;
		}
		case '-' : {
			result = num1 - num2;
			break;
		}
		case 'x' : {
			result = num1 * num2;
			break;
		}
		case '/' : {
			result = (float)num1 / (float)num2;
			break;
		}
		default : {
		}
	}

	return(result);
}