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
#include <conio.h> //requirement for kbhit function

int main(void) {
	//Banner
	puts("		 ____  ____  ____    ____");
	puts("		|  _ \\|  _ \\|  _ \\  | ____|");
	puts("		| |_) | | | | |_) | |___ \\"); 
	puts("		|  __/| |_| |  __/   ___) |");
	puts("		|_|   |____/|_|     |____/\n\n"); 

	//Title
	printf("[Kasus 1: Penyaluran Beasiswa Universitas Terbuka Semarang]\n\n");

	//Index
	char namaMhs[30];
	char nimMhs[20];
	char alamatMhs[60];
	char namaAyahMhs[30];
	char namaIbuMhs[30];
	char pekerjaanAyahMhs[20];
	char pekerjaanIbuMhs[20];
	int penghasilanAyahMhs;
	int penghasilanIbuMhs;
	int semesterMhs;
	float ipkMhs;

	///Input
	printf("Lengkapi data dibawah ini:\n");
	printf("Nama: ");
	gets(namaMhs);
	//fgets(namaMhs, 30, stdin);		//a safer alternative with buffer specified
	//namaMhs[strcspn(namaMhs, "\n")] = 0;
	printf("NIM: ");
	gets(nimMhs);
	printf("Semester: ");
	scanf("%d", &semesterMhs);
	printf("IPK: ");
	scanf("%f", &ipkMhs);
	fflush(stdin);
	printf("Alamat: ");
	gets(alamatMhs);
	printf("Nama ayah: ");
	gets(namaAyahMhs);
	printf("Nama ibu: ");
	gets(namaIbuMhs);
	printf("Perkerjaan ayah: ");
	gets(pekerjaanAyahMhs);
	printf("Perkerjaan ibu: ");
	gets(pekerjaanIbuMhs);
	printf("Penghasilan ayah: ");
	scanf("%d", &penghasilanAyahMhs);
	printf("Penghasilan ibu: ");
	scanf("%d", &penghasilanIbuMhs);

	printf("\nKepada mahasiswa dengan identitas: \n");
	printf("   Nama    : %s\n", namaMhs);
	printf("   NIM     : %s\n", nimMhs);
	printf("   Semester: %d\n", semesterMhs);
	printf("   Alamat  : %s\n", alamatMhs);
	if ( ipkMhs >= 3.00 ) {
		if ( semesterMhs >= 5 && (penghasilanAyahMhs + penghasilanIbuMhs) <= 3000000 ) {
			printf("Selamat, Anda berhak mendapat beasiswa.\n");
		} else {
			printf("Maaf, Anda belum bisa diterima untuk mendapat beasiswa.\n");
		}
	} else {
		printf("Maaf, Anda belum bisa diterima untuk mendapat beasiswa.\n");
	}

	//require a keyboard input to close the program
	printf ("\nProgram telah selesai . . .");
	while (1) if (kbhit()) break;

	return EXIT_SUCCESS;
}