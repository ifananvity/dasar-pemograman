/* -------------------------------
   Name   : loop4.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc   : Menginputkan data berupa integer dan menampilkan data tersebut.
            Banyak data ditentukan oleh user dengan menginputkan jumlah data diawal
            program
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int begin, end, increment, decrement;

	//input starting and ending number
	printf("Begin at:");
	scanf("%d", &begin);
	printf("Stop at:");
	scanf("%d", &end);

	//determine whether to increment or decrement
	if (begin < end) {
		printf("Increment by:");
		scanf("%d", &increment);
		printf("\n");

		while (begin <= end){
		printf("%d\n", begin);
		begin += increment;
		}
	} else if (begin > end) {
		printf("Decrement by:");
		scanf("%d", &decrement);
		printf("\n");

		while (begin >= end){
		printf("%d\n", begin);
		begin -= decrement;
		}
	} else {
		//loop will not occur if begin equals to end
		printf("Invalid inputs.\n");
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}