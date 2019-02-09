/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 25/10/2018
Desc    : PSDA 4: List ADT
==============================================================================
*/

#include "implisit.h"

int main(void){
    List L;
    address P;

    int i; //used as a loops increment
    int num;
    int ph; //placeholder

    CreateList(&L);
    ListEmpty(L);

    printf("Masukan maksimal elemen = ");scanf("%d",&num);
    for(i=0; i<num; i++) {
        printf("elemen ke-%d = ",(i+1));
        scanf("%d",&ph);

        P=Alokasi(ph);
        InsertFirst(&L,P);
    }
    printf("\n");
    PrintInfo(L);

    printf("\n-- DELETE FIRST --\n");
    printf("Masukan jumlah elemen yang akan dihapus = ");
    scanf("%d",&num);
    for(i=0; i<num; i++) {
        DelFirst(&L,&P);
    }
    PrintInfo(L);

    printf("\nApakah list kosong? : %s\n",ListEmpty(L) ? "true" : "false");

    printf("\n-- DELETE LAST --\n");
    printf("Masukan jumlah elemen yang akan dihapus = ");
    scanf("%d",&num);
    for(i=0; i<num; i++) {
        DelLast(&L,&P);
    }
    PrintInfo(L);

    printf("\nApakah list kosong? : %s\n",ListEmpty(L) ? "true" : "false");

    printf("\n-- INSERT FIRST --\n");
    printf("Masukan jumlah elemen yang akan ditambah = ");scanf("%d",&num);
    for(i=0; i<num; i++) {
        printf("elemen ke-%d = ",(i+1));
        scanf("%d",&ph);

        P=Alokasi(ph);
        InsertFirst(&L,P);
    }
    PrintInfo(L);

    printf("\n-- INSERT LAST --\n");
    printf("Masukan jumlah elemen yang akan ditambah = ");scanf("%d",&num);
    for(i=0; i<num; i++) {
        printf("elemen ke-%d = ",(i+1));
        scanf("%d",&ph);

        P=Alokasi(ph);
        InsertLast(&L,P);
    }
    PrintInfo(L);

    printf("\n-- ADDRESS SEARCH --\n");
    printf("Masukan elemen yang akan dicari = ");
    scanf("%d",&ph);

    P = Search (L,ph);

    if(P != Nil) {
        printf("Ditemukan di alamat = %p",P);
    } else {
        printf("Alamat idak ditemukan\n");
    }

    // pauses the screen
    getch();

    return EXIT_SUCCESS;
}
