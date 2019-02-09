/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 26/9/2018
Desc    : PSDA 2: Queue ADT alternatif 1
==============================================================================
*/

// Libraries
#include"header.h"
#include "boolean.h"

int main(void) {
    Queue Q;
    infotype X;
    
    menu = TRUE;
    a:
    if(menu==TRUE){
        printf("Masukan maksimal elemen: ");
        scanf("%d",&Max);
        CreatEmpty(&Q,Max);
        menu=FALSE;goto a;
    }else{
        printf("\n----------\n");
        printf("QUEUE ADT\n");
        printf("1. Add\n");
        printf("2. Delete\n");
        printf("3. Destruct\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        do{
            scanf("%d",&select);
        }while(select<1 || select>5);
        switch(select){
        case 1:
            printf("\nMasukkan Nilai: ");
            scanf("%d",&X);
            Add(&Q,X);
            break;
        case 2:
            Del(&Q,&X);
            break;
        case 3:
            Destruct(&Q);
            menu=1;
            break;
        case 4:
            Cetak(Q);
            break;
        case 5:
            printf("\nQueue Selesai\n");
            pauses();
            break;
        }
        if(select!=5)
            goto a;
    }
    return 0;
}
