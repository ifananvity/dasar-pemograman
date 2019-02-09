/*
 * pustaka.h
 *
 *  Created on: 1 May 2018
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
int add_rec(int num1, int num2);
int subs_rec(int num1, int num2);
int multiply_rec(int num1, int num2);
int div_rec(int num1, int num2);
int pow_rec(int num1, int num2);
int factorial(int number);
void fibonacci(int number);
int sum_traversal(int data[], int cur);
void tugas1(void);
void tugas2(void);
void tugas3(void);
void tugas4(void);
void tugas5(void);
void tugas6(void);
void tugas7(void);
void tugas8(void);

#endif /* PUSTAKA_H_ */
