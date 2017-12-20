/*
==============================================================================
Author  : Tifan Dwi Avianto (github.com/ifananvity)
NIM     : A11.2017.10629 / A11.4113
Version : 1.0 - 15/12/2017
Desc    : Check if 2 matrices are equal
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declaration
int tableA[5][5];
int tableB[5][5];
int row1, column1, row2, column2;
int i, j;
int flag = 1;

// Function prototypes
void askRowAndColumn(void);
void initializeTable(void);
void printTable();
void compareEquality(void);

int main(void) {
    askRowAndColumn();
    initializeTable();
    printTable();
    compareEquality();

    // pause the console
    printf("\nPress any key to continue . . .");getch();

    return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void askRowAndColumn() {
    printf("Masukan row dan column untuk matriks A: (<=5)\n");
    scanf("%d %d", &row1, &column1);
    printf("Masukan row dan column untuk matriks B: (<=5)\n");
    scanf("%d %d", &row2, &column2);

}

void initializeTable() {
    // generate random elements
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            tableA[i][j] = rand() % 10;     // accept only number <10
            tableB[i][j] = rand() % 10;
        }
    }
}

void printTable() {
    // print each matrix
    printf("\nMatriks A:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < column1; j++) {
            printf("%d ", tableA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriks B:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < column2; j++) {
            printf("%d ", tableB[i][j]);
        }
        printf("\n");
    }
}

void compareEquality() {
    // comparing two matrices for equality
    if (row1 == row2 && column1 == column2) {
        printf("\nKedua matriks dapat di cek kesamaannya\n");
        for (i = 0; i < row1; i++) {
            for (j = 0; j < column2; j++) {
                if (tableA[i][j] != tableB[i][j]) {
                    flag = 0;
                    break;
                }
            }
        }

        // output conclusion
        if (flag == 1)
            printf("Matriks A sama dengan matriks B\n");
        else
            printf("TAPI, matriks A tidak sama dengan matriks B\n");
    } else {
        printf("\nKedua matriks tidak dapat di cek kesamaannya\n");
    }

    
}