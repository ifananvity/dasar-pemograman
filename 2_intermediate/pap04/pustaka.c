#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int cek_urut(int data[], int n) {
    int i;
    int cond = 1;

    for (i = 0; i < n-1; i++) {
        if (data[i] > data[i+1])
            cond = 0;
    }

    return(cond);
}

void sort(int data[], int n) {
    int i;
    int langkah, temp;

    for (langkah = 0; langkah < n; langkah++) {
        for (i = langkah+1; i < n; i++) {
            if (data[langkah] > data[i]) {
                temp = data[langkah];
                data[langkah] = data[i];
                data[i] = temp;
            }
        }
    }
}

void compress_array(int data[], int jml_data) {
    int i, j;

    for (i = 0, j = 0; i < jml_data; i++) {
        if (data[i])
            data[j++] = data[i];
    }

    printf("{");
    for (i = 0; i < j; i++) {
        printf("%d", data[i]);
        if (i < j-1)
            printf(", ");
    }
    printf("}\n");
}

void selection_sort1(int data[], int jml_data) {
    int i, j;
    int langkah, temp;

    for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");

    for (langkah = 0; langkah < jml_data; langkah++) {
        for (i = langkah+1; i < jml_data; i++) {
            if (data[langkah] > data[i]) {
                temp = data[langkah];
                data[langkah] = data[i];
                data[i] = temp;
            }
        }

        for (j = 0; j < jml_data; j++) {
            printf("%d ", data[j]);
        }
        printf("\n");
    }
}

void selection_sort2(int data[], int jml_data) {
    int i;
    int langkah, temp;

    for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");

    for (langkah = 0; langkah < jml_data; langkah++) {
        if(cek_urut(data, jml_data))
            break;

        for (i = langkah+1; i < jml_data; i++) {
            if (data[langkah] > data[i]) {
                temp = data[langkah];
                data[langkah] = data[i];
                data[i] = temp;
            }
        }

        for (i = 0; i < jml_data; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
    }
}

int get_median(int data[], int jml_data) {
    int median;

    sort(data, jml_data);

    if (jml_data % 2)
        median = data[jml_data / 2];

    return(median);
}

void tugas1() {
    int arr1[] = {3, 5, 38, 0, 44, 47};
    int arr2[] = {3, 0, 44, 38, 0, 5, 47};
    int arr3[] = {2, 15, 0, 0, 0, 26, 27, 36};
    int arr4[] = {15, 36, 27, 0, 0, 2, 26};

    printf("arr1[] = ");
    compress_array(arr1,6);
    printf("arr2[] = ");
    compress_array(arr2,7);
    printf("arr3[] = ");
    compress_array(arr3,8);
    printf("arr4[] = ");
    compress_array(arr4,7);

    printf("\n");
}

void tugas2() {
    int arr1[] = { 3, 44, 38, 5, 47 };
    int arr2[] = { 15, 36, 27, 2, 26 };

    selection_sort1(arr1, 5);printf("\n");
    selection_sort1(arr2, 5);printf("\n");

    printf("\n");
}

void tugas3() {
    int arr1[] = {3, 44, 38, 5, 47};
    int arr2[] = {15, 36, 27, 2, 26};

    selection_sort2(arr1, 5);printf("\n");
    selection_sort2(arr2, 5);printf("\n");

    printf("\n");
}

void tugas4() {
    int arr1[] = {3, 44, 38, 5, 47};
    int arr2[] = {15, 36, 27, 2, 26};

    printf("arr1 : %d\n", get_median(arr1, 5));
    printf("arr2 : %d\n", get_median(arr2, 5));
}