/*
 * header.h
 *
 *  Created on: 28 Nov 2018
 *      Author: Tifan Dwi Avianto
 */

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#ifndef HEADER_H_
#define HEADER_H_

// Constants
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

// Global var
boolean flagg;
int num;

#define Head(QL) (QL).HEAD
#define Tail(QL) (QL).TAIL
#define InfoHead(QL) (QL).HEAD->info
#define InfoTail(QL) (QL).TAIL->info
#define Info(P) (P)->info
#define Next(P) (P)->next

// Structures
typedef int infotype;
typedef struct ElmtQueue *address;
typedef struct ElmtQueue {
    infotype info;
    address next;
}ElmtQueue;

typedef struct {
    address HEAD;
    address TAIL;
}QueueList;

// Prototypes
void createEmpty(QueueList *QL);
address alokasi(infotype angka);
boolean isEmpty(QueueList QL);
void addQueueList(QueueList *QL, infotype nilai);
void delQueueList(QueueList *QL, infotype *nilai);
void printQueueList(QueueList QL);

#endif /* HEADER_H_ */
