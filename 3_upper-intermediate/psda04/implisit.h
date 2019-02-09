/*
 * implisit.h
 *
 *  Created on: 25 October 2018
 *      Author: Tifan Dwi Avianto
 */

#ifndef IMPLISIT_H_
#define IMPLISIT_H_

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "boolean.h"

// Constants
#define Nil NULL
#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define First(L) L

typedef int infotype;
typedef struct Elmtlist *address;
typedef struct Elmtlist {
	infotype Info;
	address Next;
}ElmtList;

typedef address List;

// Function prototypes
boolean ListEmpty(List L);
void CreateList(List *L);
address Alokasi(infotype X);
void Dealokasi(address *P);
address Search(List L, infotype X);
boolean FSearch(List L, address P);
address SearchPrec(List L, infotype X);
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelP(List *L, infotype X);
void DelLast(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
void PrintInfo(List L);
int NbElmt(List L);
infotype Max(List L);
address AdrMax(List L);
infotype Min(List L);
address AdrMin(List L);
float Average(List L);
void DelAll(List *L);
void InversList(List *L);
List FInversList(List L);
void CopyList(List *L1, List *L2);
List FCopyList(List L);
void CpAlokList(List Lin, List *Lout);
void Konkat(List L1, List L2, List *L3);
void Konkat1(List *L1, List *L2, List *L3);
void PecahList(List *L1, List *L2, List L);

#endif // HEADER_H_
