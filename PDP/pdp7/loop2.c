/* -------------------------------
   Name   : loop2.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc	  : Mencetak angka kelipatan 2 mulai dari 0 hingga 100
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int i;

	//Output
	for(i = 0; i <= 100; i += 2){
		printf("%d\n", i);
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}