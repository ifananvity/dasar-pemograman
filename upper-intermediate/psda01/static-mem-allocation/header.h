#include <stdlib.h>
#include <stdio.h>
#include "boolean.h"

#ifndef HEADER_H_
#define HEADER_H_

#define Nil 0
#define TOP(S) (S).TOP

#define InfoTop(S) (S).T[(S).TOP]
#define MaxEl 10

typedef int infotype;
typedef int address;

typedef struct
{
    address TOP;
    infotype T[MaxEl+1];
}Stack;

void Push(Stack *S, infotype X);
void CreateEmpty(Stack *S);

void Pop(Stack *S, infotype X);
bool IsEmpty(Stack S);
bool IsFull(Stack S);
void CetakStack(Stack S);

#endif /* HEADER_H_ */
