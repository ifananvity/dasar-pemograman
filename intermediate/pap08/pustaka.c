/*
 * pustaka.c
 *
 *  Created on: 7 May 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

int min2(int num1, int num2) {
    if (num1 < num2)
        return num1;
    else
        return num2;
}

int max2(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int rec_mac(int data[], int cur, int arrSize) {
    if (cur < arrSize-1) {
        return max2(data[cur], rec_mac(data, cur+1, arrSize));
    } else {
        return max2(data[cur],data[cur+1]);
    }
}

int rec_min(int data[], int cur, int arrSize) {
    if (cur < arrSize-1) {
        return min2(data[cur], rec_min(data, cur+1, arrSize));
    } else {
        return min2(data[cur],data[cur+1]);
    }
}

void rec_print_all(int data[], int cur, int arrSize) {
    if (cur < arrSize-1) {
        printf("%d - ", data[cur]);
        rec_print_all(data, cur+1, arrSize);
    } else if (cur == arrSize-1) {
        printf("%d\n", data[cur]);
    }
}

float rec_mean(int data[], int cur, int arrSize) {
    if (cur == arrSize-1) {
        return data[cur];
    } else if (cur == 0) {
        return (data[cur] + rec_mean(data, cur+1, arrSize)) / arrSize;
    }

    return (data[cur] + rec_mean(data, cur+1, arrSize));
}

int inner_rec(int data[], int cur, int arrSize) {
    if (arrSize > 0) {
        if (data[arrSize-1] > data[cur]) {
            return cur = arrSize-1;
        }
        inner_rec(data, cur, arrSize-1);
    }
}

void tukar(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void rec_selection_sort(int data[], int arrSize) {
    if (arrSize > 1) {
        int pos = inner_rec(data, arrSize-1, arrSize);
        tukar(&data[pos], &data[arrSize-1]);
        //int temp = data[pos];
        //data[pos] = data[arrSize-1];
        //data[arrSize-1] = temp;
        rec_selection_sort(data, arrSize-1);
    }
}

/* ------------------------------ TUGAS ------------------------------ */

void tugas1() {
    printf("Find the smallest number between 2 parameters:\n");
    printf("Hasil : %d\n", min2 (5, 7));
    printf("Hasil : %d\n", min2 (12, 3));
    printf("Hasil : %d\n", min2 (4, 9));
    printf("Hasil : %d\n", min2 (9, 2));

    puts("");
}

void tugas2() {
    printf("Find the largest number between 2 parameters:\n");
    printf("Hasil : %d\n", max2 (5, 7));
    printf("Hasil : %d\n", max2 (12, 3));
    printf("Hasil : %d\n", max2 (4, 9));
    printf("Hasil : %d\n", max2 (9, 2));

    puts("");
}

void tugas3() {
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("Find the largest number in an array using recursion:\n");
    printf("Hasil : %d\n", rec_mac(data1, 0, 7));
    printf("Hasil : %d\n", rec_mac(data2, 0, 7));
    printf("Hasil : %d\n", rec_mac(data3, 0, 7));

    puts("");
}

void tugas4() {
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("Find the smallest number in an array using recursion:\n");
    printf("Hasil : %d\n", rec_min(data1, 0, 7));
    printf("Hasil : %d\n", rec_min(data2, 0, 7));
    printf("Hasil : %d\n", rec_min(data3, 0, 7));

    puts("");
}

void tugas5() {
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("Print an array using recursion:\n");
    rec_print_all(data1, 0, 7);
    rec_print_all(data2, 0, 7);
    rec_print_all(data3, 0, 7);

    puts("");
}

void tugas6() {
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("Find mean in an array using recursion:\n");
    printf("Hasil : %.3f\n", rec_mean(data1, 0, 7));
    printf("Hasil : %.3f\n", rec_mean(data2, 0, 7));
    printf("Hasil : %.3f\n", rec_mean(data3, 0, 7));

    puts("");
}

void tugas7() {
    int data1[] = {12, 15, 1, 23, 44, 21, 30};
    int data2[] = {19, 16, 22, 15, 9, 28, 11};
    int data3[] = {41, 29, 9, 14, 6, 5, 22};
    printf("Sort an array in ascending order using recursion:\n");
    rec_selection_sort(data1, 7);
    rec_print_all(data1, 0, 7);

    rec_selection_sort(data2, 7);
    rec_print_all(data2, 0, 7);

    rec_selection_sort(data3, 7);
    rec_print_all(data3, 0, 7);

    puts("");
}

