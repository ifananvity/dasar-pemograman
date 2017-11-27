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

//Prototypes
int power(base, exp);

//Global var
int base, exp;
int result;

int main(void) {
	// ask user a number
	printf("base^exponent = result\n");
	printf("Input base: ");
	scanf("%d", &base);
	printf("Input exponent: ");
	scanf("%d", &exp);

	// output answer
    printf("\n%d^%d = %d\n", base, exp, power(base, exp));

	// pause the console
	printf("\nPress any key to exit . . .");getch();

	return EXIT_SUCCESS;
}

int power(base, exp) {	
	result = 1;
    while(exp) {   
        result *= base; 
        exp--; 
    }
    return result;
}