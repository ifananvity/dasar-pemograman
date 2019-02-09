/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 02/12/2017
   Desc		: Menampilkan deret bilangan prima berdasarkan inputan dari
			  user
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int i;     // outer loop
	int j;     // inner loop
	int limit;
	int flag;

	// prompt limit
	printf("Input limit: ");
	scanf("%d", &limit);

	printf("\nPrime numbers (1-%d interval) : ", limit);
	for (i = 1; i <= limit; i++) {
		flag = 0;

		for(j = 2; j <= i/2; j++) {
			if(i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			printf("%d ", i);
		}
	}

	// pause the console
	printf("\n\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}