/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output dengan outer loop while – inner loop for
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i = 1;
	int j;

	// menampilkan output 7 kali dengan outer loop while
	while (i <= 7) {
		printf("Perulangan ke-%d\n", i++);

		// menampilkan output 5 kali dengan inner loop for
		for (j = 1; j <= 5; j++) {
			printf("angka ke-%d\n", j);
		}
	}

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}