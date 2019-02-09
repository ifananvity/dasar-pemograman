/*
==============================================================================
Author  : Tifan Dwi Avianto (github.com/ifananvity)
NIM     : A11.2017.10629 / A11.4113
Version : 1.0 - 19/12/2017
Desc    : Calculate sum of each row and column in matrix
==============================================================================
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Constants definitions
#define NUM_ROWS 5
#define NUM_COLS 5

// Delcaration
int i, j;
int rowSum;
int colSum;
int sumAll;
int table[NUM_ROWS][NUM_COLS] = {
    {2, 4, 7, 7, 1},
    {8, 9, 1, 8, 2},
    {5, 3, 6, 3, 1},
    {7, 8, 1, 0, 5},
    {2, 1, 3, 4, 9}
};

// Function prototypes
void printTable(void);
void calculateSum(void);
int addRow(int arr[NUM_ROWS][NUM_COLS], int k, int c);
int addCol(int arr[NUM_ROWS][NUM_COLS], int k, int r);

int main(void) {
    printTable();
    calculateSum();

    // pause the console
    printf("\nPress any key to continue . . .");getch();

    return EXIT_SUCCESS;
}

/* ------------------------------ FUNCTIONS ------------------------------ */

void printTable() {
    // print out atrix
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

void calculateSum() {
    // computng row sum
    for (i = 0; i < NUM_ROWS; i++) {
        rowSum = addRow(table, i, NUM_COLS);
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // computing col sum
    for (j = 0; j < NUM_COLS; j++) {
        colSum = addCol(table, j, NUM_ROWS);
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    // computation of all elements
    for (j = 0; j < NUM_ROWS; j++) {
        sumAll = sumAll + addRow(table, j, NUM_COLS);
    }
    printf("Sum of all elements of matrix = %d\n", sumAll);
}

int addRow(int arr[NUM_ROWS][NUM_COLS], int k, int c) {
    int rSum = 0, i;
    for (i = 0; i < c; i++) {
        rSum = rSum + arr[k][i];
    }
    return(rSum);
}

int addCol(int arr[NUM_ROWS][NUM_COLS], int k, int r) {
    int cSum = 0, j;
    for (j = 0; j < r; j++) {
        cSum = cSum + arr[j][k];
    }
    return(cSum);
}
