/* ------------------------------------------------------------------------
   Author 	: Tifan Dwi Avianto 
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0
   Created	: 25/11/2017
   Desc		: Menampilkan output tabel perkalian dengan nested loop
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i, n, loopCounter;

	// shows information about the program
	printf("Perkalian silang [1...10] x n =\n");
	printf("Input 0 untuk keluar!\n\n");

	while (1) {
		// ask a number
		printf("Input n : ", n);scanf("%d", &n);

		// output perkalian silang
		for (i = 1; i <= 10; i++) {
			printf("%d x %d = %d\n", i, n, i * n);
		}
		printf("\n");

		// exit loop
		if (n == 0 || loopCounter > 100) {
			break;
		}
		loopCounter++;
	}

	return EXIT_SUCCESS;
}