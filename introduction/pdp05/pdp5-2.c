/* -------------------------------
   19/10/2017
   Program PDP-5 Semester 1 UDINUS

   Developed by Tifan Dwi Avianto
   A11.2017.10629 / A11.4113
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //if using string variable
#include <stdbool.h> //if using boolean variable 
#include <conio.h> //requirement for kbhit & getch function

int main(void) {
	//Banner
	puts("		 ____  ____  ____    _____");
	puts("		|  _ \\|  _ \\|  _ \\  | ____|");
	puts("		| |_) | | | | |_) | |___ \\"); 
	puts("		|  __/| |_| |  __/   ___) |");
	puts("		|_|   |____/|_|     |____/\n\n"); 

	//Title
	printf("[Kasus 2: Pembelian Cat Dinding Dengan Potongan Harga]\n\n");

	//Index
	char namaPembeli[30];		
	char tanggalPembelian[15];
	int pilihanKalengCat;
	int luasDinding;
	int totalKalengCat;
	int hargaSatuKalengCat;
	int hargaTotal;

	//Input1
    printf("1. Dulux\n");
    printf("2. Catylac\n");
    printf("3. Nippon Paint\n");
    printf("4. Avitex\n");
    printf("5. Mowilex\n");
    printf("Pilih cat dinding yang akan dibeli: ");
    scanf("%d",&pilihanKalengCat);
    fflush(stdin);

	//Menentukan harga satu kaleng cat sesuai merk & jumlah pembelian
	switch (pilihanKalengCat) {
		case 1 : {									//Dulux
			if ( totalKalengCat <= 25 ) {
				hargaSatuKalengCat = 24500;
			} else if ( (totalKalengCat >= 26) && (totalKalengCat <= 50) ) {
				hargaSatuKalengCat = 23000;
			} else if ( totalKalengCat >= 50 ) {
				hargaSatuKalengCat = 22000;
			}
			break;
		}
		case 2 : {									//Catylax
			if ( totalKalengCat <= 25 ) {
				hargaSatuKalengCat = 23500;
			} else if ( (totalKalengCat >= 26) && (totalKalengCat <= 50) ) {
				hargaSatuKalengCat = 22500;
			} else if ( totalKalengCat >= 50 ) {
				hargaSatuKalengCat = 21000;
			}
			break;
		}
		case 3 : {	 								//Nippon Paint
			if ( totalKalengCat <= 25 ) {
				hargaSatuKalengCat = 23500;
			} else if ( (totalKalengCat >= 26) && (totalKalengCat <= 50) ) {
				hargaSatuKalengCat = 22000;
			} else if ( totalKalengCat >= 50 ) {
				hargaSatuKalengCat = 20500;
			}
			break;
		}
		case 4 : {									//Avitex
			if ( totalKalengCat <= 25 ) {
				hargaSatuKalengCat = 20000;
			} else if ( (totalKalengCat >= 26) && (totalKalengCat <= 50) ) {
				hargaSatuKalengCat = 19000;
			} else if ( totalKalengCat >= 50 ) {
				hargaSatuKalengCat = 17500;
			}
			break;
		}
		case 5 : {									//Mowilex
			if ( totalKalengCat <= 25 ) {
				hargaSatuKalengCat = 18500;
			} else if ( (totalKalengCat >= 26) && (totalKalengCat <= 50) ) {
				hargaSatuKalengCat = 17000;
			} else if ( totalKalengCat >= 50 ) {
				hargaSatuKalengCat = 16000;
			}
			break;
		}
		default : {
			printf("\nPilihan tidak sesuai. Program akan keluar . . .");
			getch();
			return EXIT_SUCCESS;
		}
	}

	//Input2
	printf("\nLengkapi data dibawah ini:\n");
	printf("Nama: ");
	gets(namaPembeli);
	printf("Tanggal (DD/MM/YYYY): ");
	gets(tanggalPembelian);
	if ( strlen(tanggalPembelian) !=  10 ) {
		printf("\nTanggal tidak sesuai. Program akan keluar . . .");
		getch();
		return EXIT_SUCCESS;
	}
	printf("Luas dinding yang akan di cat (m^2): ");
	scanf("%d", &luasDinding);

	//Menentukan harga total
	if ( luasDinding % 10 != 0 ) {
		totalKalengCat = luasDinding / 10 + 1;
	} else {
		totalKalengCat = luasDinding / 10;
	}
	hargaTotal = hargaSatuKalengCat * totalKalengCat;

	//Output
	printf("\n\n+-----------------------------------+\n");
	printf("                          %s\n\n", tanggalPembelian);
	printf("  Sdr/i. %s\n\n\n", namaPembeli);
	switch (pilihanKalengCat) {
		case 1 :
			printf("  Dulux          %d   Rp. %d,-\n", totalKalengCat, hargaSatuKalengCat);
			break;
		case 2 :
			printf("  Catylax        %d   Rp. %d,-\n", totalKalengCat, hargaSatuKalengCat);
			break;
		case 3 :
			printf("  Nippon Paint   %d   Rp. %d,-\n", totalKalengCat, hargaSatuKalengCat);
			break;
		case 4 :
			printf("  Avitex         %d   Rp. %d,-\n", totalKalengCat, hargaSatuKalengCat);
			break;
		case 5 :
			printf("  Mowilex        %d   Rp. %d,-\n", totalKalengCat, hargaSatuKalengCat);
			break;
	}
	printf("  ---------------------------------\n");
	printf("  Total:             Rp. %d,-\n", hargaTotal);
	printf("\n+-----------------------------------+\n");

	//requires a keyboard input to close the program
	printf ("\nProgram telah selesai . . .");
	//while (1) if (kbhit()) break;
	getch();

	return EXIT_SUCCESS;
}