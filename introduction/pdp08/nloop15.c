/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output pola:
   			  *
   			  **
   			  ***
   			  ****
  			  *****
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i, j, k;
	
	// output pola
	for (i = 1; i <= 5; i++) {
		for (j = 0; j <= k; j++) {
			printf("*");
		}
		printf("\n");

		// increment inner loop's max value
		k++;
	}

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}