/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 11/3/2018
Desc    : Implement various functions
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include "pustaka.h"

int main(void) {
	printf("Check if given number is a leap year: (1=true/0=false)\n");
	printf("2000 : %d\n", is_kabisat(2000));
	printf("2020 : %d\n", is_kabisat(2020));
	printf("2015 : %d\n", is_kabisat(2015));
	printf("2013 : %d\n", is_kabisat(2013));
	puts("");

	printf("Count vowels:\n");
	printf("'Laki-Laki' : %d\n", hitung_vokal("Laki-Laki"));
	printf("'Ada Ini di Situ' : %d\n", hitung_vokal("Ada Ini di Situ"));
	puts("");

	printf("Check if given number is a prime number: (1=true/0=false)\n");
	printf("2 : %d\n", check_prime(2));
	printf("3 : %d\n", check_prime(3));
	printf("9 : %d\n", check_prime(9));
	printf("15 : %d\n", check_prime(15));
	puts("");

	printf("Frequency of character for 'UDINUS kampus bebas Narkoba':\n");
	char_frequency("UDINUS kampus bebas Narkoba");
	printf("Frequency of character for 'Algoritma sangat menyenenangkan':\n");
	char_frequency("Algoritma sangat menyenenangkan");
	puts("");

	print_diamond(5);
	print_diamond(3);

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}