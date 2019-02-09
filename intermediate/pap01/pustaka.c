/*
 * pustaka.c
 *
 *  Created on: 4 Maret 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pustaka.h"

void print_nama(char nama[]) {
	printf("Namanya adalah: %s\n", nama);

	//char temp[50];
	//strcpy(temp, nama);
	//printf("Namanya adalah: %s\n", temp);
}

int len_text(char text[]) {
	int len;
	len = strlen(text);
	return (len);
}

int max(int arr_num[], int n) {
	int temp = 0;
	int i = 0;
	while (i < n) {
		if (arr_num[i] > temp) {
			temp = arr_num[i];
		}
		i++;
	}
	return(temp);
}

