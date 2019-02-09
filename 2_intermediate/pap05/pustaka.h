/*
 * pustaka.h
 *
 *  Created on: 1 April 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef PUSTAKA_H_
#define PUSTAKA_H_e

// Constant definition
#define TRUE  1
#define FALSE 0

// Function prototypes
int sequent_search(int angka, int data[], int jml_data);
int is_inverse(int list1[], int list2[], int jml_data);
void min_max(int data[], int jml_data, int *min, int *max);
int min_max_gap(int data[], int jml_data);
int at_least(char huruf, int jml, char teks[]);
void tugas1(void);
void tugas2(void);
void tugas3(void);
void tugas4(void);
void tugas5(void);

#endif /* PUSTAKA_H_ */
