/*
 * pustaka.h
 *
 *  Created on: 1 April 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#ifndef PUSTAKA_H_
#define PUSTAKA_H_

// Constant definition
#define TRUE  1
#define FALSE 0

// Function prototypes
void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
int binary_search(int angka, int data[], int jml_data);
int search_word(char word[], char text[]);
int is_anagram(char text1[], char text2[]);
void tugas1(void);
void tugas2(void);
void tugas3(void);


#endif /* PUSTAKA_H_ */
