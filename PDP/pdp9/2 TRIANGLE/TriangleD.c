/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 02/12/2017
   Desc		: Output various triangular pattern
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i;     // outer loop
	int limit; // outer & inner loop limit
	int j;     // inner loop
	int k; 		

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);
	puts("");

	// set initial value
	k = 1;

	// output
	for (i = 1; i <= limit; i++) {
		j = 0;
		j += k;
		while (j <= limit) {
			printf("%d ", j);
			j++;
		}
		k++;

		printf("\n");
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}