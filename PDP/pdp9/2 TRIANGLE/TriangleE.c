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
	// outer loop
	int i;
	int limit;
	// inner loop (ganjil)
	int j;
	int k; 
	int kTemp;
	int l;
	int lTemp;
	int limitOdd;
	// inner loop (genap)
	int m;
	int n;
	int limitEven;

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);
	puts("");

	// set initial value
	// ganjil
	l = 1;
	k = 1;
	limitOdd = limit ;
	// genap
	n = 2;
	limitEven = limit;

	// output
	for (i = 1; i <= limit; i++) {
		if (i % 2 == 0) {
			m = 0;
			m += n;
			for (int o = 1; o < limitEven; o++) {
				printf("%d ", m);
				m++;
			}
			n += 2;
			limitEven -= 2;
		} else {
			for (j = 1; j <= limitOdd; j++) {
				printf("%d ", k);
				if (j == 3) {
					lTemp = l;
					kTemp = k;
				}
				if (j < limitOdd) {
					l += 2;
					k += l;
				}
			}
			k = kTemp;
			l = lTemp;
			limitOdd -= 2;
		}
		printf("\n");
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}