/* -------------------------------
   Name   : loop3.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc   : Menginputkan data berupa integer sebanyak 10 kali dengan
            menggunakan perulangan
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int i, num;

	//ask the user a number 10 times
	for(i = 1; i <= 10; i++){
		printf("Enter a number:");
		scanf("%d", &num);
		printf("You entered a number: %d\n", num);
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}