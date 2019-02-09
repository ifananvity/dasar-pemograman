/*
 * pustaka.h
 *
 *  Created on: 3 June 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#ifndef PUSTAKA_H_
#define PUSTAKA_H_

// Globals
int i, j; // used as loop var

// Constants definitions
#define TRUE 1
#define FALSE 0

// Function prototypes
int *stat_return(int *data, int size);
int *fibo_sequence_return(int count);
int *random_return(int count);
void stat_param(int *stat, int *data, int size);
void fibo_sequence_param(int *seq, int count);
void random_param(int *seq, int count);
void sort_name(char **names, char order[], int size);
void printArray(int data[], int n);
void swap(char *str1, char *str2);
void tugas1(void);
void tugas2(void);
void tugas3(void);
void tugas4(void);
void tugas5(void);
void tugas6(void);
void tugas7(void);

#endif /* PUSTAKA_H_ */
