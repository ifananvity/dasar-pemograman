#include <stdlib.h>
#include <stdio.h>
#include "boolean.h"

#ifndef HEADER_H_
#define HEADER_H_

#define TOP(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Nil 0

typedef int infotype;
typedef int address;

typedef struct
{
    int Size;
    address TOP;
    infotype *T;
}Stack;


void Destruct(Stack *S);
void CreateEmpty(Stack *S, int Size);
void Push(Stack *S, infotype X);

void Pop(Stack *S, infotype X);
bool IsEmpty(Stack S);
bool IsFull(Stack S);
void CetakStack(Stack S);

#endif /* HEADER_H_ */
