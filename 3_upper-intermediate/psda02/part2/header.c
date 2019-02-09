/*
 * header.c
 *
 *  Created on: 3 October 2018
 *      Author: Tifan Dwi Avianto
 */

#include "header.h"
#include "boolean.h"

bool IsEmpty(Queue Q) {
    return (HEAD(Q)==Nil && TAIL(Q)==Nil);
}

bool IsFull(Queue Q) {
    return (HEAD(Q)==1 && TAIL(Q)==Q.MaxEl);
}

int NBElmt(Queue Q) {
    if(HEAD(Q)==Nil && TAIL(Q)==Nil) {
        return 0;
    } else {
        return (TAIL(Q)-HEAD(Q)+1);
    }
}

void CreatEmpty(Queue *Q, int Max) {
    (*Q).T=(infotype*)malloc((Max+1)*sizeof(infotype));
    HEAD(*Q)=Nil;
    TAIL(*Q)=Nil;
    (*Q).MaxEl=Max;
}

void Destruct(Queue *Q) {
    free((*Q).T);
    HEAD(*Q)=Nil;
    TAIL(*Q)=Nil;
    printf("Queue destroyed\n");
    pauses();
}

void Add(Queue *Q,infotype X)
{
    int i,j;
    if(IsEmpty(*Q))
    {
        HEAD(*Q)++;
        TAIL(*Q)++;
        InfoHead(*Q)=X;
        printf("%d telah ditambahkan\n",X);
    }
    else if(IsFull(*Q))
    {
        printf("\nQueue penuh!\n");
    }
    else if(TAIL(*Q)==(*Q).MaxEl)
    {
        i=1;
        j=HEAD(*Q);
        while(i<=NBElmt(*Q)){
            (*Q).T[i]=(*Q).T[j];
            i++;
            j++;
        }
        TAIL(*Q)=NBElmt(*Q);
        HEAD(*Q)=1;
        TAIL(*Q)++;
        InfoTail(*Q)=X;
        printf("%d telah ditambahkan\n",X);
    }
    else
    {
        TAIL(*Q)++;
        InfoTail(*Q)=X;
        printf("%d telah ditambahkan\n",X);
    }
    pauses();
}
void Del(Queue *Q,infotype *X)
{
    if(IsEmpty(*Q))
    {
        printf("\nQueue kosong!\n");
    }
    else if(NBElmt(*Q)==1)
    {
        *X=InfoHead(*Q);
        printf("%d Telah keluar\n",*X);
        HEAD(*Q)=Nil;
        TAIL(*Q)=Nil;
    }
    else
    {
        *X=InfoHead(*Q);
        printf("%d Telah keluar\n",*X);
        HEAD(*Q)++;
    }
    pauses();
}

void Cetak(Queue Q) {
    printf("HEAD = %d\nTAIL = %d\n\n",HEAD(Q),TAIL(Q));
    while(HEAD(Q)<=TAIL(Q)) {
        printf("| %5d |\n",InfoHead(Q));
        HEAD(Q)++;
    }
    pauses();
}

void pauses() {
    printf("\n");
    system("pause");
}
