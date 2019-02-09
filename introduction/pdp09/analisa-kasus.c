/*
==============================================================================
Author	: Tifan Dwi Avianto (github.com/ifananvity)
NIM		: A11.2017.10629 / A11.4113
Version	: 1.0 - 02/12/2017
PERILAKU PROGRAM :

repeat 10 times
	Meminta user jawaban dari soal n + n
	I.S    : n = 1
	Proses : n = n + 1
	F.S    : n = 10
	
	if jawaban benar
		output "Benar"
	else
		output "Salah"

	if jawaban salah
		repeat 3 times
			Meminta user jawaban dari soal n + n
			if jawaban benar
				output "Benar"

	if jawaban masih salah
		output jawaban

==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constants
#define TRUE 1
#define FALSE 0

int main(void) {
	// Declaration
	int jawab;
	int benar;	// flag (1 or 0)
	int i;		// outer loop
	int lagi;	// inner loop

 	

	// prompt soal pertambahan angka yang sama (n + n) 10 kali
	for (i = 1; i < 11; i++) {
		// prompt soal
		printf("\n %d + %d = ", i , i);
		scanf("%d", &jawab);
		
		// menentukan kebenaran jawaban
		if (jawab == i + i){
			printf("Benar!\n");

			benar = TRUE;
		} else {
			printf("Salah.\n");
			printf("Coba Lagi.\n");

			// set flag to FALSE
			benar = FALSE;
		}

		// jika jawaban salah, prompt soal 3 kali lagi
		for (lagi = 0; lagi < 3 && !benar; lagi++) {
			printf(" %d + %d = ", i, i);
			scanf("%d", &jawab);

			// menentukan kebenaran jawaban
			if(jawab == i + i) {
				printf("Benar!\n");

				// set flag to TRUE
				benar = TRUE;
			}
		}

		// jika jawaban masih salah, beri jawaban
		if(!benar) {
			printf("Jawabnya adalah %d.\n", i + i);
		}
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}