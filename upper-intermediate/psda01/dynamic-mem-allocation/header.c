#include "header.h"


void Push(Stack *S, infotype X) 
{
    if(IsFull(*S)) 
    {

        return true;
    } else 
    {
        InfoTop(*S) = X;

        TOP(*S)++;
    }
}

void CreateEmpty(Stack *S,int Size) 
{
    S->T = malloc(Size* sizeof(int));
    S->Size = Size;

    TOP(*S) = Nil;
}

void Pop(Stack *S, infotype X) {
    if(IsEmpty(*S)) 
    {
        return true;
    } else  
    {
        TOP(*S)--;

        X = InfoTop(*S);
    }
}

void Destruct(Stack *S) 
{

    free(S->T);
}

bool IsEmpty(Stack S) 
{
    if(Nil==TOP(S) ) 
    {
        return true;
    } else {
        return false;
    }
}

bool IsFull(Stack S) 
{
    if(S.Size==TOP(S)) 
    {
        return true;
    } else 
    {
        return false;
    }
}

void CetakStack(Stack S) 
{
    if(IsEmpty(S)) 
    {
        return true;
    } else  
    {
        while(TOP(S)!=Nil)  
        {
            TOP(S)--;

            printf("stack %d = %d\n",TOP(S) ,InfoTop(S));
        }
    }
	
}
