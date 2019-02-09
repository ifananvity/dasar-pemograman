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
    if (HEAD(Q)==1 && TAIL(Q)==Q.MaxEl) {
        return 1;
    }
    else if (NBElmt(Q)==Q.MaxEl) {
        return 1;
    }
    else {
        return 0;
    }
}

int NBElmt(Queue Q) {
    if(HEAD(Q)==Nil && TAIL(Q)==Nil) {
        return 0;
    } else if(TAIL(Q)>=HEAD(Q)) {
        return (TAIL(Q)-HEAD(Q)+1);
    } else if(HEAD(Q)>TAIL(Q)) {
        return((HEAD(Q)-Q.MaxEl+1)+(TAIL(Q)));
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

void Add(Queue *Q,infotype X) {
    if(IsEmpty(*Q)) {
        HEAD(*Q)++;
        TAIL(*Q)++;
        InfoHead(*Q)=X;
        printf("%d telah ditambahkan\n",X);
    } else if(IsFull(*Q)) {
        printf("Queue penuh!\n");
    } else if(TAIL(*Q)==(*Q).MaxEl) {
        TAIL(*Q)=1;
        InfoTail(*Q)=X;
        printf("%d Telah ditambahkan\n",X);
    } else {
        TAIL(*Q)++;
        InfoTail(*Q)=X;
        printf("%d Telah ditambahkan\n",X);
    }
    pauses();
}

void Del(Queue *Q,infotype *X) {
    if(IsEmpty(*Q)) {
        printf("Queue kosong!\n");
    } else if(NBElmt(*Q)==1) {
        *X=InfoHead(*Q);
        printf("%d telah keluar\n",*X);
        HEAD(*Q)=Nil;
        TAIL(*Q)=Nil;
    } else if(HEAD(*Q)==(*Q).MaxEl) {
        *X=InfoHead(*Q);
        printf("%d telah keluar\n",*X);
        HEAD(*Q)=1;
    } else {
        *X=InfoHead(*Q);
        printf("%d telah keluar\n",*X);
        HEAD(*Q)++;
    }
    pauses();
}
void Cetak(Queue Q) {
    int i;
    printf("HEAD = %d\nTAIL = %d\n\n",HEAD(Q),TAIL(Q));
    if(HEAD(Q)<=TAIL(Q)) {
        while(HEAD(Q)<=TAIL(Q)) {
            printf("| %5d |\n",InfoHead(Q));
            HEAD(Q)++;
        }
    } else {
        while(HEAD(Q)<=Q.MaxEl) {
            printf("| %5d |\n",InfoHead(Q));
            HEAD(Q)++;
        }
        i=1;
        while(i<=TAIL(Q)) {
            printf("| %5d |\n",Q.T[i]);
            i++;
        }
    }
    pauses();
}

void pauses() {
    printf("\n");
    system("pause");
}
