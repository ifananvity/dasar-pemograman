/*
 * header.h
 *
 *  Created on: 3 October 2018
 *      Author: Tifan Dwi Avianto
 */

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//#include <string.h>
#include "boolean.h"

#ifndef HEADER_H_
#define HEADER_H_

// Global vars
int Max, menu, select;

// Constant definitions
#define Nil 0
#define HEAD(S) (S).HEAD
#define TAIL(S) (S).TAIL
#define InfoHead(S) (S).T[HEAD(S)]
#define InfoTail(S) (S).T[TAIL(S)]

// Keywords
typedef int infotype;
typedef int address;

// Structures
typedef struct{
    infotype *T;
    address HEAD;
    address TAIL;
    int MaxEl;
}Queue;

// Function prototypes
bool IsEmpty(Queue Q);
bool IsFull(Queue Q);
int NBElmt(Queue Q);
void CreatEmpty(Queue *Q, int Max);
void Destruct(Queue *Q);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);
void Cetak(Queue Q);
void pauses();

#endif /* HEADER_H_ */