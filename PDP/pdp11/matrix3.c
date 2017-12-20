/*
==============================================================================
Author  : Tifan Dwi Avianto (github.com/ifananvity)
NIM     : A11.2017.10629 / A11.4113
Version : 1.0 - 19/12/2017
Desc    : Caculate the sum of matrix's elements in diagonal
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
int sum = 0;
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
    // set initial value
    j = 0;

    // calculate the sum
    for (i = 0; i < NUM_ROWS; i++) {
        sum += table[i][j];
        j++;
    }

    // output computed result
    printf("\nSum: %d\n", sum);
}