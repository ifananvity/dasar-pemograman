/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 25/11/2017
   Desc		: Menampilkan deretan bilangan faktor dari sebuah angka
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int n, i;

	// ask a number
	printf("Enter a positive integer: ");
	scanf("%d",&n);

	// output answer
	printf("Factors of %d are: ", n);
	for(i=1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}