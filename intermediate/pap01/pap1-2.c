/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 4/3/2018
Desc    : Implement various functions
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "pustaka.h"

int main(void) {
	print_nama("Tifan Dwi Avianto");
	
	printf("Panjang teks |%s| adalah |%d| karakter\n", "Universitas Dian Nuswantoro", len_text("Universitas Dian Nuswantoro"));
	
	int arr1[5] = {4, 5, 6, 7, 8};
	int arr2[5] = {8, 7, 6, 5, 4};
	int arr3[5] = {7, 5, 8, 6, 4};
	int arr4[7] = {67, 23, 55, 87, 12, 40, 22};

	printf("Nilai tertinggi dari arr4 adalah %d\n", max(arr4, 7));

	// pause the console
	printf("\nPress any key to continue . . .");getch();

	return EXIT_SUCCESS;
}