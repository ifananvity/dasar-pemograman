/* -------------------------------
   Name   : loop5.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc   : Menampilkan jumlah dan rata-rata bilangan kelipatan 3, mulai dari 1
            hingga 60
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	float average;
	int i, n, total;

	//set initial value
	total = 0;

	for (i = 1; i <= 60; i += 3) {
		total += i;
		n += 1;
		printf("%d\n", i);
	}

	//calculates average
	average = (float)total/(float)n;
	
	printf("\n");
	printf("Total : %d\n", total);
	printf("Average : %.1f\n", average);


	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}