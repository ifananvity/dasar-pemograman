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
	int i, j, k, l, m;
	
	// set initial max value
	k = 4;

	// output pola
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= k; j++) {
			printf(" ");
		}
		for (l = 0; l <= m; l++) {
			printf("*");
		}
		printf("\n");
		
		// in/decrement max values
		k--;
		m++;
	}

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}