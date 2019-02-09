/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output matriks angka dengan loop
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i, j, k;
	
	// set inner loop's initial start and max value 
	j = 11;
	k = 16;

	// output deretan bilangan 6 kali
	for (i = 1; i <= 6; i++) {
		while (j <= k) {
			printf("%d ", j);
			j++;
		}
		printf("\n");

		// increment inner loop's start and max value
		j += 4;
		k += 10;
	}

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}