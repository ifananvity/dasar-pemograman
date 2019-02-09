/*
 * header.h
 *
 *  Created on: 22 Nov 2018
 *      Author: Tifan Dwi Avianto
 */

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef HEADER_H_
#define HEADER_H_

// Constants definitions
#define Nil NULL
#define MaxEl 10
#define TRUE 1
#define FALSE 0
#define Info(S) (S)->info

// Global var
int flag;
int num;

// Keywords
typedef int infotype;

struct Stack{
    infotype info;
    struct Stack *next;
};
typedef struct Stack Stack;

Stack *S;

// Prototypes
void createEmpty(void);
void push(infotype X);
int pop(void);
int isEmpty(void);
void print(Stack *head);

#endif /* HEADER_H_ */
