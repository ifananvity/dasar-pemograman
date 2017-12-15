/* ------------------------------------------------------------------------
   Author	: Tifan Dwi Avianto (github.com/ifananvity)
   NIM		: A11.2017.10629 / A11.4113
   Version	: 1.0 - 25/11/2017
   Desc		: Menghitung nilai pangkat dengan menggunakan 2 inputan.
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declaration
	int base, exp;
	int result;

	// prompt user
	printf("base^exponent = result\n");
	printf("Input base: ");
	scanf("%d", &base);
	printf("Input exponent: ");
	scanf("%d", &exp);

	// output problem
	printf("\n%d^%d = ", base, exp);

	// calculate result
	result = 1;
    while(exp) {   
        result *= base; 
        exp--; 
    }

	// output answer
    printf("%d\n", result);

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}