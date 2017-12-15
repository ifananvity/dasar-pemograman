/* -------------------------------
   03/11/2017
   Program PDP-6 Semester 1 UDINUS

   Developed by Tifan Dwi Avianto
   A11.2017.10629 / A11.4113
   ------------------------------- */

/* [KASUS 1]
   Menentukan apakah input berupa satuan, puluhan, atau ribuan
*/

//Libraries
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> //if using string variable
//#include <stdbool.h> //if using boolean variable 
#include <conio.h> //requirement for kbhit function

int main(void) {
	//Banner
	puts("		 ____  ____  ____     __   ");
	puts("		|  _ \\|  _ \\|  _ \\   / /_  ");
	puts("		| |_) | | | | |_) | | '_ \\ ");
	puts("		|  __/| |_| |  __/  | (_) |");
	puts("		|_|   |____/|_|      \\___/ \n\n");

	//Title
	printf("[Kasus 1: Mengecek Apakah Input Berupa Satuan, Puluhan, Atau Ribuan]\n\n");

	//Index
	int angka;

	//Input
	printf("Input angka: ");
	scanf("%ld", &angka);

	if (angka <= 0) {
		printf("Input tidak valid. Silahkan input angka lebih dari 0\n");
	} else if (angka > 0 && angka < 10) {
		printf("Angka satuan\n");
	} else if (angka >= 10 && angka < 100) {
		printf("Angka puluhan\n");
	} else if (angka >= 100 && angka < 1000) {
		printf("Angka ratusan\n");
	} else if (angka >= 1000 && angka < 10000) {
		printf("Angka ribuan\n");
	} else if (angka >= 10000 && angka < 100000) {
		printf("Angka sepuluh ribuan\n");
	} else if (angka >= 100000 && angka < 1000000) {
		printf("Angka seratus ribuan\n");
	} else if (angka >= 1000000) {
		printf("Input tidak valid. Angka lebih dari 1 juta\n");
	}

	//require a keyboard input to close the program
	printf ("\nProgram telah selesai . . .");
	getch();

	return EXIT_SUCCESS;
}