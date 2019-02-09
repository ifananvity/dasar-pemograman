/*
==============================================================================
Author  : Tifan Dwi Avianto (github.com/ifananvity)
NIM     : A11.2017.10629 / A11.4113
Version : 1.0 - 15/12/2017
Desc    : Adition, subtraction, multiplication of two 5x5 matrices
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constants definitions
#define NUM_ROWS 5
#define NUM_COLS 5

// Declaration
int tableA[NUM_ROWS][NUM_COLS];
int tableB[NUM_ROWS][NUM_COLS];
int tableResult[NUM_ROWS][NUM_COLS];
int i, j, k;     // loop variables
int sum = 0;

// Function prototypes
void initializeTable(void);
void printTable(int table[][NUM_COLS]);
void chooseOperation(void);

int main(void) {
    initializeTable();
    printf("Matriks A:\n");
    printTable(tableA);
    printf("\nMatriks B:\n");
    printTable(tableB);
    chooseOperation();

    // pause the console
    printf("\nPress any key to continue . . .");getch();

    return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void initializeTable() {
    // generate random elements
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
            tableA[i][j] = rand() % 10;     // accept only number <10
            tableB[i][j] = rand() % 10;
        }
    }
}

void printTable(int table[][NUM_COLS]) {
    // print each matrix
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

void chooseOperation() {
    printf("\n1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    char selection = getchar();
    printf("\n");

    switch (selection) {
        case '1' : {
            // addition
            for (i = 0; i < NUM_ROWS; i++) {
                for (j = 0; j < NUM_COLS; j++) {
                    printf("%d ", tableA[i][j] + tableB[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case '2' : {
            // subtraction
            for (i = 0; i < NUM_ROWS; i++) {
                for (j = 0; j < NUM_COLS; j++) {
                    printf("%d ", tableA[i][j] - tableB[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case '3' : {
            // multiplication
            tableResult[i][j] = 0;
            for (i = 0; i < NUM_ROWS; i++) {     // row of first matrix
                for (j = 0; j < NUM_COLS; j++) {     // column of second matrix
                    sum = 0;
                    for (k = 0; k < NUM_COLS; k++) {
                        sum = sum + tableA[i][k] * tableB[k][j];
                    }
                    tableResult[i][j] = sum;
                }
            }
                
            printTable(tableResult);
            break;
        }
        default : {
            printf("Invalid input\n");
        }
    }
}