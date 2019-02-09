/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 10/10/2018
Desc    : PSDA 3: list ADT
==============================================================================
*/

#include "eksplisit.h"

int main(void) {
    List L, Linv, Lcopy, Lkonkat, L1, L2;
    infotype X;

    int i, N;

    CreateList(&L);

    printf("Masukan maksimal elemen = "); scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("elemen ke-%d : ", i);
        scanf("%d",&X);
        InsVFirst(&L,X);
    }

    printf("\nList empty= %d\n", ListEmpty(L));

    Printinfo(L);

    printf("Initial value of max, min, rata-rata:\n");
    printf("Jumlah elemen : %d\n", NbElmt(L));
    printf("Rata-rata elemen : %0.2f\n", Average(L));
    printf("Elemen maksimum list : %d\n", Max(L));
    printf("Address elemen maksimum list : %p\n", AdrMax(L));
    printf("Elemen minimum list : %d\n", Min(L));
    printf("Address elemen minimum list : %p\n", AdrMin(L));

    printf("\n-- PROCESS --\n");
    InversList(&L);
    printf("Invers List L:");
    Printinfo(L);

    CreateList(&Linv);
    Linv = FInversList(L);
    printf("List Invers L:");
    Printinfo(Linv);

    CreateList(&Lcopy);
    Lcopy = FCopyList(L);
    printf("List Copy L: ");
    Printinfo(Lcopy);

    CreateList(&Lkonkat);
    Konkat(L,Linv,&Lkonkat);
    printf("List Konkat List L dan Linv: ");
    Printinfo(Lkonkat);

    printf("Pecah List Konkat: ");
    CreateList(&L1);
    CreateList(&L2);

    PecahList(&L1,&L2,Lkonkat);
    printf("List L1 : ");
    Printinfo(L1);
    printf("List L2 : ");
    Printinfo(L2);

    getch();
    return EXIT_SUCCESS;
}
