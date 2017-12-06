/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 02/12/2017
   Desc		: Output various squares pattern
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i;
	int limit;
	int j;
	int k;
	int l;

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);
	puts("");

	// set initial value
	l = 0;

	// output
	for (i = 1; i <= limit; i++) {
		k = 1;
		k += l;
		for (j = 1; j <= limit; j++) {
			if (k < 10) {
				printf("%d  ", k);
			} else {
				printf("%d ", k);
			}
			k++;
		}
		l++;
		
		printf("\n");
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}