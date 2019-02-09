/*
 * pustaka.c
 *
 *  Created on: 11 Maret 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "pustaka.h"

int is_kabisat(int year) {
	int isLeapYear;

	if ((year % 4) || ((year % 100 == 0) && (year % 400))) {
		isLeapYear = 0;
	} else {
		isLeapYear = 1;
	}

	return(isLeapYear);
	
	/*
	if (year % 4 == 0) {
		// divisible by 4
		if (year % 100 == 0) {
			// divisible by 100
			if (year % 400 == 0) {
				// divisible by 400
				isLeapYear = 1;
			} else {
				// not divisible by 400
				isLeapYear = 0;
			}
		} else {
			// not divisible by 100
			isLeapYear = 1;
		}
	} else {
		// not divisible by 4
		isLeapYear = 0;
	}
	*/

	//return((year % 4) || ((year % 100 == 0) && (year % 400)) ? 0 : 1);
}

int hitung_vokal(char text[]) {
	int i, vokal;
	vokal = 0;

	for (i = 0; text[i] != '\0'; i++) {
		if (text[i]=='a' || text[i]=='i' || text[i]=='u' ||
        	text[i]=='e' || text[i]=='o' || text[i]=='A' ||
        	text[i]=='I' || text[i]=='U' || text[i]=='E' ||
        	text[i]=='O') {
        	vokal++;
        }
	}

	return(vokal);
}

int check_prime(int num) {
	int i;

	for (i = 2; i <= num - 1; i++) { 
		if (num % i == 0)
			return 0;
	}

	if (i == num)
		return 1;
}

void char_frequency(char text[]) {
	int i, x;
	int linebreak = 0;
	int amount[26]; // holds the frequency amount

	// sets the bitwise representations to 0 (reset value)
	memset(amount, 0, sizeof(amount));

	// find the frequency
	// Note: char equivalent in integer/decimal.
	// a - z = 97 - 122
	// A - Z = 65 - 90
	for (i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
        	x = text[i] - 'a';
        	amount[x]++;
		} else if (text[i] >= 'A' && text[i] <= 'Z') {
			x = text[i] - 'A';
			amount[x]++;
		}
	}

	// print out frequency amount to the corresponding alphabet
	for (i = 0; i < 26; i++) {
		if (amount[i]) {
			printf("'%c': %d, ", i + 'a', amount[i]);
			linebreak++;
			if (linebreak % 5 == 0)
				// add linebreak every 5
				puts("");
		}
	}

	puts("");
}

void print_diamond(int row) {
	int i, j;
	int space = row - 1;
 
    // run loop till rows-1
    for (i = 0; i < row - 1; i++) {
        for (j = 0; j < space; j++)
            printf(" ");
 
        // Print i+1 stars
        for (j = 0; j <= i; j++)
            printf("* ");
 
        puts("");
        space--;
    }
 
    // reset value
    space = 0;
 
    // repeat in reverse order
    for (i = row; i > 0; i--) {
        for (j = 0; j < space; j++)
            printf(" ");
 
        // print i stars
        for (j = 0; j < i; j++)
            printf("* ");
 
        puts("");
        space++;
    }
}