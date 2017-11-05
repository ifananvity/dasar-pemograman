/* -------------------------------
   19/10/2017
   Program PDP-5 Semester 1 UDINUS

   Developed by Tifan Dwi Avianto
   A11.2017.10629 / A11.4113
   ------------------------------- */

/*	[KASUS 3]
	saya pemakai paket XTRA Combo dari XL. setiap saya mau bandingin 'kuota internet' dengan 'sisa hari',
	biasanya saya hitung manual pake kalkulator (keduanya dijadikan persentase 0-100)

   	supaya saya dapet kesimpulan:
	if persentase kuota internet < persentase sisa hari then
   		berarti pemakaian saya boros.
   		ATAU memang paket yang saya pake tidak sesuai dengan pemakaian sehari2 saya (kuota nya sedikit)
   		dan saya harus naik paket yang kuota nya lebih banyak dan lebih mahal.
   	else
   		pemakaian saya hemat.
   	  	ATAU paket yang saya gunakan kuotanya melebihi pemakaian sehari2 saya. (kuota terlalu banyak)
   	  	dan saya bisa turun paket yang kuota nya lebih sedikit dan lebih murah

   	kenapa tidak pake aplikasi bawaan 'myXL' saja?
	karena interfacenya menunjukan 'sisa kuota 4g' dan 'sisa kuota 2g/3g/4g' dengan bar yang terpisah
   	dan bahkan sisa hari nya ga pake bar, melainkan hanya teks "Valid until: 29 days"
*/

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //if using string variable
#include <stdbool.h> //if using boolean variable 
#include <conio.h> //requirement for kbhit & getch function

//Progress bar
void progressBar(char label[], int step, int total) {
    //lebar
    const int pLebar = 60;

    //minus length label
    int lebar = pLebar - strlen(label);
    int pos = (step * lebar) / total;

    int persentase = (step * 100) / total;

    printf( "%s[", label );

    //fill progress bar with =
    for ( int i = 0; i < pos; i++ )  printf("%c", '=');

    //fill progress bar with spaces
    printf("% *c", lebar - pos + 1, ']');
    printf(" %3d%%\r", persentase);
}

int main(void) {
	//Banner
	puts("		 ____  ____  ____    ____");
	puts("		|  _ \\|  _ \\|  _ \\  | ____|");
	puts("		| |_) | | | | |_) | |___ \\"); 
	puts("		|  __/| |_| |  __/   ___) |");
	puts("		|_|   |____/|_|     |____/\n\n"); 

	//Title
	printf("[Kasus 3: Membandingkan Kuota Pemakaian & Sisa Hari Dengan Progress Bar]\n\n");

	//Index
	int pilihanPaket;
	int pilihanKuotaYoutube;
	int sisaHari;
	int persentaseKuotaInternet;
	int persentaseSisaHari;
	float kuotaInternetTotal;
	float kuota4G;
	float kuota2G3G4G;
	float kuotaYoutube;

	//Input
	printf("1. XTRA Combo 40GB, Rp.179,000\n");
	printf("2. XTRA Combo 24GB, Rp.129,000\n");
	printf("3. XTRA Combo 16GB, Rp.89,000\n");
	printf("4. XTRA Combo 8GB, Rp.59,000\n");
	printf("Pilih paket sekarang Anda: ");
    scanf("%d", &pilihanPaket);
    printf("\n");

    switch (pilihanPaket) {
    	case 1 : {
    		//Detail
    		printf("Anda sedang dalam paket XTRA Combo 40GB dengan spesifikasi:\n");
    		printf(" Kuota 4G        20GB\n");
    		printf(" Kuota 2G/3G/4G  10GB\n");
    		printf(" Kuota Youtube   10GB\n\n");

			printf("Sisa kuota 4G: ");
			scanf("%f", &kuota4G);
			//Validasi
			if (kuota4G > 20) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Sisa kuota 2G/3G/4G: ");
			scanf("%f", &kuota2G3G4G);
			//Validasi
			if (kuota2G3G4G > 10) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Include kuota youtube juga? (1=ya, 0=tidak) ");
			scanf("%d", &pilihanKuotaYoutube);
    		switch (pilihanKuotaYoutube) {
    			case 1 : {
    				printf("Sisa kuota Youtube: ");
					scanf("%f", &kuotaYoutube);
					//Validasi
					if (kuotaYoutube > 10) {
					printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
					}

					//Menentukan persentase kuota internet DENGAN kuota youtube
					kuotaInternetTotal = 40.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G + kuotaYoutube) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			case 0 : {
    				//Menentukan persentase kuota internet TANPA kuota youtube
    				kuotaInternetTotal = 30.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			default : {
    				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
    			}
    		}
    		break;
    	}
    	case 2 : {
    		//Detail
    		printf("Anda sedang dalam paket XTRA Combo 24GB dengan spesifikasi:\n");
    		printf(" Kuota 4G        12GB\n");
    		printf(" Kuota 2G/3G/4G  6GB\n");
    		printf(" Kuota Youtube   6GB\n\n");

			printf("Sisa kuota 4G: ");
			scanf("%f", &kuota4G);
			//Validasi
			if (kuota4G > 12) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Sisa kuota 2G/3G/4G: ");
			scanf("%f", &kuota2G3G4G);
			//Validasi
			if (kuota2G3G4G > 6) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Include kuota youtube juga? (1=ya, 0=tidak) ");
			scanf("%d", &pilihanKuotaYoutube);
    		switch (pilihanKuotaYoutube) {
    			case 1 : {
    				printf("Sisa kuota Youtube: ");
					scanf("%f", &kuotaYoutube);
					//Validasi
					if (kuotaYoutube > 6) {
					printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
					}

					//Menentukan persentase kuota internet DENGAN kuota youtube
					kuotaInternetTotal = 24.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G + kuotaYoutube) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			case 0 : {
    				//Menentukan persentase kuota internet TANPA kuota youtube
    				kuotaInternetTotal = 18.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			default : {
    				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
    			}
    		}
    		break;
    	}
    	case 3 : {
    		//Detail
    		printf("Anda sedang dalam paket XTRA Combo 16GB dengan spesifikasi:\n");
    		printf(" Kuota 4G        8GB\n");
    		printf(" Kuota 2G/3G/4G  4GB\n");
    		printf(" Kuota Youtube   4GB\n\n");

			printf("Sisa kuota 4G: ");
			scanf("%f", &kuota4G);
			//Validasi
			if (kuota4G > 8) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Sisa kuota 2G/3G/4G: ");
			scanf("%f", &kuota2G3G4G);
			//Validasi
			if (kuota2G3G4G > 4) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Include kuota youtube juga? (1=ya, 0=tidak) ");
			scanf("%d", &pilihanKuotaYoutube);
    		switch (pilihanKuotaYoutube) {
    			case 1 : {
    				printf("Sisa kuota Youtube: ");
					scanf("%f", &kuotaYoutube);
					//Validasi
					if (kuotaYoutube > 4) {
					printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
					}

					//Menentukan persentase kuota internet DENGAN kuota youtube
					kuotaInternetTotal = 16.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G + kuotaYoutube) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			case 0 : {
    				//Menentukan persentase kuota internet TANPA kuota youtube
    				kuotaInternetTotal = 12.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			default : {
    				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
    			}
    		}
    		break;
    	}
    	case 4 : {
    		//Detail
    		printf("Anda sedang dalam paket XTRA Combo 8GB dengan spesifikasi:\n");
    		printf(" Kuota 4G        3GB\n");
    		printf(" Kuota 2G/3G/4G  2GB\n");
    		printf(" Kuota Youtube   2GB\n\n");

			printf("Sisa kuota 4G: ");
			scanf("%f", &kuota4G);
			//Validasi
			if (kuota4G > 3) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Sisa kuota 2G/3G/4G: ");
			scanf("%f", &kuota2G3G4G);
			//Validasi
			if (kuota2G3G4G > 2) {
				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
				getch();
				return EXIT_SUCCESS;
			}

			printf("Include kuota youtube juga? (1=ya, 0=tidak) ");
			scanf("%d", &pilihanKuotaYoutube);
    		switch (pilihanKuotaYoutube) {
    			case 1 : {
    				printf("Sisa kuota Youtube: ");
					scanf("%f", &kuotaYoutube);
					//Validasi
					if (kuotaYoutube > 2) {
					printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
					}

					//Menentukan persentase kuota internet DENGAN kuota youtube
					kuotaInternetTotal = 8.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G + kuotaYoutube) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			case 0 : {
    				//Menentukan persentase kuota internet TANPA kuota youtube
    				kuotaInternetTotal = 6.0;
					persentaseKuotaInternet = ( (kuota4G + kuota2G3G4G) / kuotaInternetTotal ) * 100.0;
					break;
    			}
    			default : {
    				printf("\nPilihan tidak sesuai. Program akan keluar . . .");
					getch();
					return EXIT_SUCCESS;
    			}
    		}
    		break;
    	}
    	default : {
    		printf("\nPilihan tidak sesuai. Program akan keluar . . .");
			getch();
			return EXIT_SUCCESS;
    	}
    }

    printf("Sisa hari (1-30): ");
	scanf("%d", &sisaHari);
	//Validasi
	if (sisaHari > 30) {
		printf("\nPilihan tidak sesuai. Program akan keluar . . .");
		getch();
		return EXIT_SUCCESS;
	}

    //Menentukan persentase sisa hari
    persentaseSisaHari = ( sisaHari / 30.0 ) * 100.0;

    //Output
  	//Border
    printf("\n+-----------------------------------------------------------------+\n\n");

    //Persentase Kuota & Sisa Hari dengan progress bar
    if (pilihanKuotaYoutube == 1) {
    	progressBar( "Kuota Internet & Youtube ", persentaseKuotaInternet, 100);
    	printf("\n");
    } else {
    	progressBar( "Kuota Internet           ", persentaseKuotaInternet, 100);
    	printf("\n");
    }
    progressBar( "Sisa Hari                ", persentaseSisaHari, 100);
    printf("\n\n");

    //Kesimpulan
    printf("Kesimpulan: \n");
    if (persentaseKuotaInternet < persentaseSisaHari) {
    	printf("Pemakaian kuota Anda boros\n");
    	printf("1. Pindah paket dengan kuota yang lebih banyak, atau\n");
    	printf("2. Kurangi pemakaian kuota\n");
    } else {
    	printf("Pemakaian kuota Anda hemat\n");
    }

	//requires a keyboard input to close the program
	printf ("\nProgram telah selesai . . .");
	//while (1) if (kbhit()) break;
	getch();

	return EXIT_SUCCESS;
}