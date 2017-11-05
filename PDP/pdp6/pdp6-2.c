/* -------------------------------
   03/11/2017
   Program PDP-6 Semester 1 UDINUS

   Developed by Tifan Dwi Avianto
   A11.2017.10629 / A11.4113
   ------------------------------- */

/* [KASUS 2]
   Mengecek apakah input angka ASCII (0-127) merupakan:
   - karakter
   - huruf (konsonan atau vokal)
   - angka (ganjil atau genap)
   - symbol lain
*/

//Libraries
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> //if using string variable
#include <stdbool.h> //if using boolean variable 
#include <conio.h> //requirement for kbhit function
#include <ctype.h>

int main(void) {
	//Banner
	puts("		 ____  ____  ____     __   ");
	puts("		|  _ \\|  _ \\|  _ \\   / /_  ");
	puts("		| |_) | | | | |_) | | '_ \\ ");
	puts("		|  __/| |_| |  __/  | (_) |");
	puts("		|_|   |____/|_|      \\___/ \n\n");

	//Title
	printf("[Kasus 2: Mengecek input angka ASCII (0-127)]\n\n");

	//Index
	int angkaAscii;
	int aksi;
	bool lowercaseVokal, uppercaseVokal;

	//Input
	printf("Input nilai ASCII (0-127): ");
	scanf("%d", &angkaAscii);
	//Validasi
	if (angkaAscii < 0 || angkaAscii > 127) {
		printf("\nInput tidak sesuai. Program akan keluar . . .");
		getch();
		return EXIT_SUCCESS;
	}

	//Menentukan aksi sesuai nilai ascii
	if (isalpha(angkaAscii)) {
		//1 (true) jika angkaAscii merupakan huruf vokal lowercase atau uppercase
		lowercaseVokal = (angkaAscii == 'a' || angkaAscii == 'e' || angkaAscii == 'i' || angkaAscii == 'o' || angkaAscii == 'u');
		uppercaseVokal = (angkaAscii == 'A' || angkaAscii == 'E' || angkaAscii == 'I' || angkaAscii == 'O' || angkaAscii == 'U');

		//1 (true) jika salah satu lowercaseVokal atau uppercaseVokal benar
		if (lowercaseVokal || uppercaseVokal) {
			aksi = 1;		//huruf vokal
		} else {
			aksi = 2;		//huruf konsonan
		}
	} else if (isdigit(angkaAscii)) {
		if (angkaAscii % 2 == 0) {
			aksi = 3;		//angka genap
		} else {
			aksi = 4;		//angka anjil
		}
	} else if ((angkaAscii >= 0 && angkaAscii <= 32) || angkaAscii == 127) {
		aksi = 5;			//karakter
	} else {
		aksi = 6;			//simbol
	}

	//Output
	printf("\nKarakter ASCII: %c\n", angkaAscii);
	switch (aksi) {
		case 1 : {
			printf("Input merupakan huruf vokal\n");
			break;
		}
		case 2 : {
			printf("Input merupakan huruf konsonan\n");
			break;
		}
		case 3 : {
			printf("Input merupakan angka genap\n");
			break;
		}
		case 4 : {
			printf("Input merupakan angka ganjil\n");
			break;
		}
		case 5 : {
			printf("Input merupakan karakter\n");
			break;
		}
		case 6 : {
			printf("Input merupakan simbol\n");
			break;
		}
		default : {
			printf("foo\n");
		}
	}

	//requires a keyboard input to close the program
	printf ("\nProgram telah selesai . . .");
	getch();

	return EXIT_SUCCESS;
	
}