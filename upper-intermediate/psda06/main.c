/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 28/11/2018
Desc    : PSDA 6: Queue with linked list
==============================================================================
*/

// Libraries
#include "header.h"

int main(void) {
	QueueList QL;
    createEmpty(&QL);

    // add queues
    addQueueList(&QL, 10);
    addQueueList(&QL, 25);
    addQueueList(&QL, 40);
    addQueueList(&QL, 55);
    addQueueList(&QL, 70);

    printQueueList(QL);

    // delete queues
    // penampung
    infotype X;

    delQueueList(&QL, &X);
    printf("Setelah di delete\n");
    printQueueList(QL);

    getch();

    return EXIT_SUCCESS;
}