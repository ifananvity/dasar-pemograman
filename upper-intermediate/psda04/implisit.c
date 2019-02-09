/*
 * implisit.c
 *
 *  Created on: 25 October 2018
 *      Author: Tifan Dwi Avianto
 */

#include "implisit.h"

boolean ListEmpty (List L) {
    return(First(L) == Nil);
}

void CreateList (List * L) {
    First(*L) = Nil;
}

address Alokasi (infotype X)  {
    address P;

    P = (address) malloc (sizeof(ElmtList));
    if (P != Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return(P);
}

void Dealokasi (address *P) {
    free(*P);
}

address Search (List L, infotype X) {
    address P,Prec,Found=Nil;
    P = First(L);
    Prec=Nil;

    while (P != Nil) {
        if (Info(P) == X) {
            Found = Prec;
            P = Next(P);
        } else {
            Prec = P;
            P = Next(P);

        }
    }

    return(Found);
}

boolean FSearch (List L, address P) {
    address Pt;
    boolean Found;

    Pt = First(L);
    Found = false;

    while ((Pt != Nil) && (!Found)) {
        if (P == Pt) {
            Found = true;
        } else {
            Pt = Next(Pt);
        }
    }

    return(Found);
}

address SearchPrec (List L, infotype X) {
    address P,Prec,Before,Found=Nil;

    P = First(L);
    Prec=Nil;
    Before=Nil;
    while (P = Nil) {
        if (Info(P) == X) {
            Found = Before;
        } else {
            Before=Prec;
            Prec = P;
            P = Next(P);

        }
    }

    return(Found);
}


void InsVFirst (List * L, infotype X) {
    address P;

    P = Alokasi(X);
    if (P != Nil) {
        InsertFirst(L,P);
    }
}


void InsVLast (List * L, infotype X) {
    address P;

    P = Alokasi(X);
    if (P != Nil) {
        InsertLast(L,P);
    }
}

void DelVFirst (List * L, infotype * X) {
    address P;

    DelFirst(L,&P);
    *X = Info(P);
    Next(P) = Nil;
    Dealokasi(P);
}

void DelVLast (List * L, infotype * X) {
    address P;

    DelLast(L,&P);
    *X = Info(P);
    Dealokasi(P);
}

void InsertFirst (List * L, address P) {
    Next(P) = First(*L);
    First(*L) = P;
}


void InsertAfter (List * L, address P, address Prec) {
    Next(P) = Next(Prec);
    Next(Prec) = P;
}


void InsertLast (List * L, address P) {
    address Last;

    if (First(*L) == Nil) {
        InsertFirst(L,P);
    } else {
        Last = First(*L);
        while (Next(Last) != Nil) {
            Last = Next(Last);
        }

        InsertAfter(L,P,Last);
    }
}

void DelFirst (List * L, address * P) {
    *P = First(*L);
    First(*L) = Next(First(*L));
    Next(*P) = Nil;
}

void DelP(List * L,infotype X) {
    address Pdel,P;

    Pdel = First(*L);
    P = Nil;
    while (Info(Pdel) != X) {
        P = Pdel;
        Pdel = Next(Pdel);
    }

    Next(P)=Next(Next(P));
    Next(Pdel)= Nil;
    Dealokasi(Pdel);
}


void DelLast(List * L, address * P) {
    address Last, PrecLast;

    Last = First(*L);
    PrecLast = Nil;
    while (Next(Last) != Nil) {
        PrecLast = Last;
        Last = Next(Last);
    }

    *P = Last;
    if (PrecLast == Nil) {
        First(*L) = Nil;
    } else {
        Next(PrecLast)= Nil;
    }
}


void DelAfter(List * L, address * Pdel, address Prec) {
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Next(*Pdel) = Nil;
}

void PrintInfo(List L) {
    address P;

    if (First(L) == Nil) {
        printf("List Kosong\n");
    } else {
        P = First(L);
        printf("Isi list = ");
        do {
            printf("%d, ",Info(P));
            P = Next(P);
        }
        while (P != Nil);
    }
    printf("\n");
}

int NbElmt(List L) {
    int x=0;
    address P;

    if (First(L) == Nil) {
        return (0);
    } else {
        P = First(L);
        do {
           x++;
           P = Next(P);
        } while (P != Nil);
        return (x);
    }
}

int Max(List L) {
    int x=0;
    address P;

    if (First(L) == Nil) {
        return (0);
    } else {
    P = First(L);
        do {
            if(x<Info(P)) {x=Info(P);}
            P = Next(P);
        } while (P != Nil);
        return (x);
    }
}

address AdrMax(List L) {
    int x=0;
    address P,Pmax;

    if (First(L) == Nil) {
        return (0);
    } else {
        P = First(L);
        do {
            if(x<Info(P)) {
                x=Info(P);
                Pmax = P;
            }
            P = Next(P);
        } while (P != Nil);
            return (Pmax);
    }
}

int Min(List L) {
    int x=0;
    address P;

    if (First(L) == Nil) {
        return (0);
    } else {
        P = First(L);
        x = Info(P);
        do {
            if(x>Info(P)) {x=Info(P);}
            P = Next(P);
        } while (P != Nil);
        return (x);
    }
}

address AdrMin(List L) {
    int x=0;
    address P,Pmin;

    if (First(L) == Nil) {
        return (0);
    } else {
        P = First(L);
        x = Info(P);
        do {
            if(x>Info(P)) {
                x = Info(P);
                Pmin = P;
            }
            P = Next(P);
        } while (P != Nil);
        return (Pmin);
    }
}

float Average(List L) {
    float x=0;
    int y=0;
    address P;

    if (First(L) == Nil) {
        return (0);
    } else {
        P = First(L);
        do {
            y++;
            x = x + Info(P);
            P = Next(P);
        } while (P != Nil);
        x = x / y ;
        return (x);
    }
}


void DelAll(List *L) {
    address P,Pdel;

    if (First(*L) == Nil) {
        printf("List Kosong\n");
    } else {
        P = First(*L);
        do {
            Pdel = P;
            P = Next(P);
            Dealokasi(Pdel);
        } while (P != Nil);
        Dealokasi(P);
        printf("Dealokasi sukses\n");
    }
}

void InversList(List * L) {
    address P[100];
    int x=1;

    if (First(*L) == Nil) {
        printf("List Kosong\n");
    } else {
        P[x] = First(*L);
        do {
            P[x+1] = Next(P[x]);
            x++;
        } while (P[x] != Nil);
        x--;
        First(*L)=P[x];
        do {
            Next(P[x]) = P[x-1];
            x--;
        } while (x != 1);
        Next(P[x])=Nil;
    }
}

List FInversList(List L) {
    address P,P1;
    List L1;
    int z=0;

    if (First(L) == Nil) {
        First(L1)=Nil;
    } else {
        P = First(L);
        First(L1) = Nil;
        while (P != Nil) {
            P1 = Alokasi(Info(P));
            if (P1 == Nil) { z=1; }
            InsertFirst(&L1,P1);
            P = Next(P);
        }
        if(z==1) {
            DelAll(&L1);
            First(L1) = Nil;
            return (L1);
        }
        return (L1);
    }
}

void CopyList(List *L1,List * L2) {
    First(*L2)=First(*L1);
}

List FCopyList (List L) {
   address P,P1;
    List L1;
    int z=0;

    if (First(L) == Nil) {
        First(L1)=Nil;
    } else {
        P = First(L);
        First(L1) = Nil;
        while (P != Nil) {
            P1 = Alokasi(Info(P));
            if (P1 == Nil)
            { z=1; }
            InsertLast(&L1,P1);
            P = Next(P);
        }
        if(z==1) {
            DelAll(&L1);
            First(L1) = Nil;
            return (L1);
        }
        return (L1);
    }
}

void CpAlokList (List Lin , List * Lout ) {
    address P,P1;
    int z=0;

    if (First(Lin) == Nil) {
        First(*Lout)=Nil;
    } else {
        P = First(Lin);
        First(*Lout) = Nil;
        while (P != Nil) {
            P1 = Alokasi(Info(P));
            if (P1 == Nil) { z=1; }
            InsertLast(&(*Lout),P1);
            P = Next(P);

        }
        if(z==1) {
            DelAll(&Lout);
            First(*Lout) = Nil;
        }
    }
}

void Konkat(List L1,List L2 ,List * L3 ) {
    address P,P1;
    int z=0;

    if ((First(L1)&&First(L2)) == Nil) {
        First(*L3)=Nil;
    } else {
        if (First(L1)!=Nil) {
            P = First(L1);
            First(*L3) = Nil;
            while (P != Nil) {
                P1 = Alokasi(Info(P));
                if (P1 == Nil) { z=1; }
                InsertLast(&(*L3),P1);
                P = Next(P);
            }
        } else {
            First(*L3)=Nil;
        }
        if (First(L2)!=Nil) {
            P = First(L2);
            while (P != Nil) {
                P1 = Alokasi(Info(P));
                if (P1 == Nil) { z=1; }
                InsertLast(&(*L3),P1);
                P = Next(P);
            }
        }
        if(z==1) {
            DelAll(&L3);
            First(*L3) = Nil;
        }
    }
}

void Konkat1(List * L1,List * L2,List * L3) {
    address P,P1;
    int z=0;

    if ((First(*L1)&&First(*L2)) == Nil) {
        First(*L3)=Nil;
    } else {
        if(First(*L1)!=Nil) {
            P = First(*L1);
            First(*L3) = Nil;
            while (P != Nil) {
                P1 = Alokasi(Info(P));
                if (P1 == Nil)
                { z=1; }
                InsertLast(&(*L3),P1);
                P = Next(P);
            }
        } else {
            First(*L3)=Nil;
        }

        if (First(*L2)!=Nil) {
            P = First(*L2);
            while (P != Nil) {
                P1 = Alokasi(Info(P));
                if (P1 == Nil) { z=1; }
                InsertLast(&(*L3),P1);
                P = Next(P);
            }
        }

        if(z==1) {
            DelAll(&L3);
            First(*L3) = Nil;
        }
    }

    DelAll(&(*L1));
    DelAll(&(*L2));
}

void PecahList (List *L1,List *L2,List L){
    int x,i=0;
    address P,P1;

    x=NbElmt(L);
    P=First(L);

    if(i==Nil) {
        First (*L1)=Nil;
        First (*L2)=Nil;
    }

    if(i==1) {
        First (*L2)=Nil;
    }

    while (i != (x/2)) {
        i++;
        P1 = Alokasi(Info(P));
        InsertLast(&(*L1),P1);
        P = Next(P);
    }

    while (P != Nil){
        P1 = Alokasi(Info(P));
        InsertLast(&(*L2),P1);
        P = Next(P);
    }
}
