/* -------------------------------
   Name   : loop1.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   ------------------------------- */

/*
 * Mencetak angka integer, dengan ketentuan :
 * - Variabel loop1 : mencetak angka mulai dari 1 hingga 50
 * - Variable loop2 : mencetak angka mulai dari 50 hingga 1
 * - Variable loop3 : mencetak selisih dari loop1 dan loop2
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int i, j, selisih;

	printf("L1  |  L2  |  SL   <-loop1; loop2; selisih\n");
	printf("----+------+----\n");

	for(i=1, j=50; i <= 50 && j >= 1; i++, j--){
		//calculates selisih
		if (i < j){
			selisih = j - i;
		} else if (i > j){
			selisih = i - j;
		} else {
			selisih = 0;
		}

		//Output
		if (i < 10){
			printf("%d   |  %d  |  %d\n", i, j, selisih);
		} else if (j < 10) {
			printf("%d  |  %d   |  %d\n", i, j, selisih);
		} else if (selisih < 10) {
			printf("%d  |  %d  |   %d\n", i, j, selisih);
		}
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}