/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output dengan while loop
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i = 1;

	// menampilkan output 7 kali
	while (i <= 7) {
		printf("Perulangan ke-%d\n", i++);
	}

	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}