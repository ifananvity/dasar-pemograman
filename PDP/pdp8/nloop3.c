/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output dengan do-while loop
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i = 1;

	// menampilkan output 7 kali
	do {
		printf("Perulangan ke-%d\n", i++);
	} while (i <= 7);

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}