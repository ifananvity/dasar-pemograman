/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 29/11/2017
   Desc		: Menampikan deret Fibonacci berdasarkan inputan dari sebuah  
			  bilangan. 

			  Dalam matematika, bilangan Fibonacci adalah barisan yang
			  didefinisikan secara rekursif sebagai berikut:
			  F(n) = F(n-1) + F(n-2)

			  Barisan ini berawal dari 0 dan 1, kemudian angka berikutnya 
			  didapat dengan cara menambahkan kedua bilangan yang berurutan
			  sebelumnya, jadi:
			  0, 1, 1, 2, 3, 5, . . .
			  F0 F1 F2 F3 F4 F5 . . .
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Constants
#define F0 0
#define F1 1

int main(void) {
	//Declaration
	int n1;		// F(n-1)
	int n2;		// F(n-2)
	int n;		// F(n)
	int limit;

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);

	// set seed values
	n1 = F0;
	n2 = F1;

	printf("\nFibonacci numbers : ");

	// output F0, F1
	if (limit == 0) {
		printf("%d", n1);	
	} else {
		printf("%d, %d", n1, n2);
	}

	// calculate and output F2, F3, . . .
	while (1) {
		//  F(n-1) + F(n-2)
		n = n1 + n2;

		// change position
		n1 = n2;
		n2 = n;

		// exit loop if n exceed limit
		if (n > limit) {
			break;
		}

		// output F(n)
		printf(", %d", n);
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}