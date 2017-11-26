/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output dengan outer loop for – inner loop while
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i, j;

	// menampilkan output 7 kali dengan outer loop for
	for (i = 1; i <= 7; i++) {
		printf("Perulangan ke-%d\n", i);

		// menampilkan output 5 kali dengan inner loop while
		j = 1;
		while (j <= 5) {
			printf("angka ke-%d\n", j++);
		}
	}

	printf("\nPress any key to exit . . .");getch();
	
	return EXIT_SUCCESS;
}