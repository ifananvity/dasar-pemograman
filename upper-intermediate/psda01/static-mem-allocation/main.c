/*
-------------------------------------
NIM : A11.2017.10629
Nama : Tifan Dwi Avianto
Program : PSDA 1
---------------------------------------*/

#include "header.h"

int main()
{
    Stack S;
    CreateEmpty(&S);
    Push(&S, 5);
	Push(&S, 6);
	Push(&S, 3);
	Push(&S, 2);
	
	CetakStack(S);
	Pop(&S, 11);
	Pop(&S, 5);

	Push(&S, 9);
	CetakStack(S);

	system("PAUSE");
    return 0;
}