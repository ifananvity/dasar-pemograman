/*
 * header.c
 *
 *  Created on: 28 Nov 2018
 *      Author: Tifan Dwi Avianto
 */

#include "header.h"

void createEmpty(QueueList *QL) {
    Head(*QL) = Nil;
    Tail(*QL) = Nil;
}

address alokasi(infotype angka) {
    address P;
    P = malloc(sizeof(ElmtQueue));
    if (P != Nil) {
        Info(P) = angka;
        Next(P) = Nil;
    }

    return P;
}

boolean isEmpty(QueueList QL) {
    if (Head(QL) == Nil && Tail(QL) == Nil) {
        return true;
    }
}

void addQueueList(QueueList *QL, infotype nilai) {
    address P;
    P = alokasi(nilai);

    if (P != Nil) {
        if (isEmpty(*QL) == 1) {
            Head(*QL) = P;
            Tail(*QL) = P;
        } else {
            Next(Tail(*QL)) = P;
            Tail(*QL) = P;
        }
    }
}

void delQueueList(QueueList *QL, infotype *nilai) {
    address P;
    *nilai = InfoHead(*QL);
    P = Head(*QL);
    Head(*QL) = Next(Head(*QL));

    if (Head(*QL) == Nil) {
        Tail (*QL) = Nil;
    }

    free(P);
}

void printQueueList(QueueList QL) {
    address P;
    P = Head(QL);

    while (P != Nil) {
        printf("[%d] ", Info(P));
        P = Next(P);
    }
    puts("");
}
