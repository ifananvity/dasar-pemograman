/*
 * pustaka.h
 *
 *  Created on: 7 May 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef PUSTAKA_H_
#define PUSTAKA_H_

// Function prototypes
int min2(int num1, int num2);
int max2(int num1, int num2);
int rec_mac(int data[], int cur, int arrSize);
int rec_min(int data[], int cur, int arrSize);
void rec_print_all(int data[], int cur, int arrSize);
float rec_mean(int data[], int cur, int arrSize);
int inner_rec(int data[], int cur, int arrSize);
void tukar(int *num1, int *num2);
void rec_selection_sort(int data[], int arrSize);
void tugas1(void);
void tugas2(void);
void tugas3(void);
void tugas4(void);
void tugas5(void);
void tugas6(void);
void tugas7(void);

#endif /* PUSTAKA_H_ */
