/*
 * pustaka.h
 *
 *  Created on: 20 May 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef PUSTAKA_H_
#define PUSTAKA_H_

// Declaration
typedef struct {
	int pembilang;
	int penyebut;
}pecahan;

// Function prototypes
pecahan makePecahan(int pemb, int peny);
void printPecahan(pecahan p);
int pembilang(pecahan p);
int penyebut(pecahan p);
pecahan addPecahan(pecahan p1, pecahan p2);
pecahan subPecahan(pecahan p1, pecahan p2);
pecahan mulPecahan(pecahan p1, pecahan p2);
pecahan divPecahan(pecahan p1, pecahan p2);
float desimalPecahan(pecahan p);
int isEqual(pecahan p1, pecahan p2);
int isBigger(pecahan p1, pecahan p2);
int isSmaller(pecahan p1, pecahan p2);
int getGcd(pecahan p); // custom-made
void tugas1(void);
void tugas2(void);
void tugas3(void);
void tugas4(void);
void tugas5(void);
void tugas6(void);
void tugas7(void);
void tugas9(void);
void tugas8(void);
void tugas9(void);
void tugas10(void);
void tugas11(void);
void tugas12(void);

#endif /* PUSTAKA_H_ */
