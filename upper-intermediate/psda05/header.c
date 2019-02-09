/*
 * header.c
 *
 *  Created on: 22 Nov 2018
 *      Author: Tifan Dwi Avianto
 */

#include "header.h"

void createEmpty(void) {
    S = Nil;
}

void push(infotype X) {
    Stack *tmp;
    tmp = malloc(sizeof(Stack));
    tmp -> info = X;
    tmp -> next = S;
    S = tmp;
}

int pop(void) {
    Stack *tmp;
    int n;
    tmp = S;
    n = tmp->info;
    S = S->next;
    free(tmp);
    return n;
}

int isEmpty(void) {
    return S==Nil;
}

void print(Stack *head) {
    if(head == Nil) {
        printf("Nil\n");
    } else {
        printf("%d\n", head -> info);
        print(head->next);
    }
}
