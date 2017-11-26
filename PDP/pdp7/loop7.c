/* -------------------------------
   Name   : loop7.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc   : mencetak bilangan yang memiliki anggota bilangan angka 1, dengan
            interval 0-100
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int i;

	//Output
	for (i = 1; i <= 100; i++) {
		if ((i == 1) || (i > 10 && i < 20) || (i > 10 && i % 10 == 1))
		printf("%d ", i);
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}