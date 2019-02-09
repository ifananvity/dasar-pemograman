/*
 * pustaka.c
 *
 *  Created on: 18 Maret 2018
 *      Author: Tifan Dwi Avianto
 */

#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
#include "pustaka.h"

int count_array(int data[], int jml_data) {
    // Function to count the number of index that has a value (!= 0)
    int i;
    int counter = 0;

    for (i = 0; i < jml_data; i++) {
        if (data[i])
            counter++;
    }

    return(counter);
}

int cek_urut(int data[], int jml_data) {
    // Function to check if array values are in ascending order
    int i;
    int flag = TRUE;

    for (i = 0; i < jml_data-1; i++) {
        if (data[i] > data[i+1])
            flag = FALSE;
    }

    return(flag);
}

void bubble_sort1(int data[], int jml_data) {
    // Function to sort an array in ascending order using bubble sort
    // And print the array each step
    int i;
    int step, temp;

    // print initial values
    for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        puts("");

    // sort in ascending order
    for (step = 0; step < jml_data-1; step++) {
        for (i = 0; i < jml_data-step-1; i++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }

        // print array values each step
        for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        puts("");
    }
}

void bubble_sort2(int data[], int jml_data) {
    // Function to sort an array in ascending order using bubble sort
    // And print the array each step, stop if already sorted
    int i;
    int step, temp;

    // print initial values
    for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        puts("");

    // sort in ascending order
    for (step = 0; step < jml_data-1; step++) {
        if (cek_urut(data, jml_data))
            // break loop if array is sorted
            break;

        for (i = 0; i < jml_data-step-1; i++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }

        // print array values each step
        for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        puts("");
    }
}

/* ------------------------------ IMPLEMENTATION ------------------------------ */

void tugas1() {
    int arr1[10] = {0};
    int arr2[10] = {0};
    int arr3[10] = {0};
    int arr4[10] = {0};

    arr1[0]=1; arr1[1]=2; arr1[2]=3; arr1[3]=4; arr1[4]=5; arr1[5]=6;
    arr2[0]=1; arr2[1]=2; arr2[2]=3; arr2[3]=4; 
    arr3[0]=2; arr3[1]=4; arr3[2]=9; arr3[3]=5; arr3[4]=1;
    arr4[0]=2; arr4[1]=8; arr4[2]=5;

    printf("Count the number of index that has a value:\n");
    printf("arr1 : %d\n", count_array(arr1,10));
    printf("arr2 : %d\n", count_array(arr2,10));
    printf("arr3 : %d\n", count_array(arr3,10));
    printf("arr4 : %d\n", count_array(arr4,10));

    puts("");
}

void tugas2() {
    int arr1[] = {3, 5, 38, 44, 47};
    int arr2[] = {3, 44, 38, 5, 47};
    int arr3[] = {2, 15, 26, 27, 36};
    int arr4[] = {15, 36, 27, 2, 26};

    printf("Check if array values are in ascending order: (1=true/0=false)\n");\
    printf("arr1 : %d\n", cek_urut(arr1, 5));
    printf("arr2 : %d\n", cek_urut(arr2, 5));
    printf("arr3 : %d\n", cek_urut(arr3, 5));
    printf("arr4 : %d\n", cek_urut(arr4, 5));

    puts("");
}

void tugas3() {
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    printf("Sort ascending: \n");
    bubble_sort1(arr1, 5);puts("");
    bubble_sort1(arr2, 5);puts("");

    puts("");
}

void tugas4() {
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    printf("Sort ascending ALT: \n");
    bubble_sort2(arr1, 5);puts("");
    bubble_sort2(arr2, 5);puts("");

    puts("");
}