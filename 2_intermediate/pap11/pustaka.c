/*
 * pustaka.c
 *
 *  Created on: 3 June 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

int *stat_return(int *data, int size) {
    int max, min, total, avg;
    
    // set initial value
    max = min = data[0];
    total = avg = 0;

    for (i = 0; i < size; i++) {
        total += data[i];
        if (data[i] < min)
            min = data[i];
        if (data[i] > max)
            max = data[i];
    }

    avg = total/size;

    data[0] = min;
    data[1] = max;
    data[2] = total;
    data[3] = avg;

    return data;
}

int *fibo_sequence_return(int count) {
    int *data;
    int t1 = 0, t2 = 1, nextTerm;
    
    data = malloc(sizeof(int)*count);

    for (i = 0; i < count; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        data[i] = t1;
    }

    return data;
}

int *random_return(int count) {
    int *data;

    data = malloc(sizeof(int)*count);

    for (i = 0; i < count; i++) {
        // this calculation will return a pseudo random number in [0, 99]
        data[i] = rand() % 100;
    }

    return data;
}

void stat_param(int *stat, int *data, int size) {    
    // set initial value
    stat[0] = data[0]; // min
    stat[1] = data[0]; // max
    stat[2] = stat[3] = 0; // total & average

    for (i = 0; i < size; i++) {
        stat[2] += data[i];
        if (data[i] < stat[0])
            stat[1] = data[i];
        if (data[i] > stat[1])
            stat[1] = data[i];
    }

    stat[3] = stat[2]/size;
}

void fibo_sequence_param(int *seq, int count) {
    int t1 = 0, t2 = 1, nextTerm;

    for (i = 0; i < count; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        seq[i] = t1;
    }
}

void random_param(int *seq, int count) {
    for (i = 0; i < count; i++) {
        // this calculation will return a pseudo random number in [0, 99]
        seq[i] = rand() % 100;
    }
}

void sort_name(char **names, char order[], int size) {
    int flag = FALSE;

    if (strcmp(order, "asc") == 0) {
        for (i = 0; i < (size-1); i++) {
            for (j = (i+1); j < size; j++) {
                if (strcmp(names[i], names[j]) > 0) { // sort in ascending order
                    swap(names[i], names[j]);
                }
            }
        }
    } else if (strcmp(order, "desc") == 0) {
        for (i = 0; i < (size-1); i++) {
            for (j = (i+1); j < size; j++) {
                if (strcmp(names[i], names[j]) < 0) { // sort in descending order
                    swap(names[i], names[j]);
                }
            }
        }
    } else {
        flag = TRUE;
    }

    if (flag) {
        for (i = 0; i < size; i++) {
            printf("%s", names[i]);
            if (i < n-1)
                printf(", ");
            else
                printf("\n");
        }
    } else {
        printf("Order invalid!\n");
    }
}

void printArray(int data[], int n) {
    for (i = 0; i < n; i++) {
        printf("%d", data[i]);
        if (i < n-1)
            printf(", ");
        else
            printf("\n");
    }
}

void swap(char *str1, char *str2) {
    // Fungsi ini menukar value dari 2 var strings
    char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

/* ------------------------------ TUGAS ------------------------------ */

void tugas1() {
    int arr1[] = {5, 9, 12, 4, 13};
    int arr2[] = {6, 7, 12, 13, 5};
    int arr3[] = {4, 9, 13, 75, 2};

    int *arr;

    printf("Find the maximum, minimum, total, and average value of an array:\n");
    printArray(arr1, 5);
    arr = stat_return(arr1, 5);
    printf("Min\t: %i\n",arr[0]);
    printf("Max\t: %i\n",arr[1]);
    printf("Total\t: %i\n",arr[2]);
    printf("Average\t: %i\n",arr[3]);

    printArray(arr2, 5);
    arr = stat_return(arr2, 5);
    printf("Min\t: %i\n",arr[0]);
    printf("Max\t: %i\n",arr[1]);
    printf("Total\t: %i\n",arr[2]);
    printf("Average\t: %i\n",arr[3]);

    printArray(arr3, 5);
    arr = stat_return(arr3, 5);
    printf("Min\t: %i\n",arr[0]);
    printf("Max\t: %i\n",arr[1]);
    printf("Total\t: %i\n",arr[2]);
    printf("Average\t: %i\n",arr[3]);

    puts("");
}

void tugas2() {
    int *arr;
    
    // set the number of terms
    int n = 10;

    printf("Fibonacci numbers in an array:\n");
    arr = fibo_sequence_return(n);
    printArray(arr, n);

    puts("");
}

void tugas3() {
    int *arr;
    
    // set the number of element
    int n = 10;

    printf("A series of pseudo-random numbers in an array:\n");
    arr = random_return(n);
    printArray(arr, n);

    puts("");
}

void tugas4() {
    int arr1[] = {5, 9, 12, 4, 13};
    int arr2[] = {6, 7, 12, 13, 5};
    int arr3[] = {4, 9, 13, 75, 2};

    int *stat1, *stat2, *stat3;
    stat1 = malloc(sizeof(int)*5);
    stat2 = malloc(sizeof(int)*5);
    stat3 = malloc(sizeof(int)*5);
    
    printf("Find the maximum, minimum, total, and average value of an array:\n");
    stat_param(stat1, arr1, 5);
    printArray(arr1, 5);
    printf("Min\t: %i\n",stat1[0]);
    printf("Max\t: %i\n",stat1[1]);
    printf("Total\t: %i\n",stat1[2]);
    printf("Average\t: %i\n",stat1[3]);

    stat_param(stat2, arr1, 5);
    printArray(arr2, 5);
    printf("Min\t: %i\n",stat2[0]);
    printf("Max\t: %i\n",stat2[1]);
    printf("Total\t: %i\n",stat2[2]);
    printf("Average\t: %i\n",stat2[3]);

    stat_param(stat3, arr1, 5);
    printArray(arr3, 5);
    printf("Min\t: %i\n",stat3[0]);
    printf("Max\t: %i\n",stat3[1]);
    printf("Total\t: %i\n",stat3[2]);
    printf("Average\t: %i\n",stat3[3]);

    puts("");
}

void tugas5() {
    int *fibo1, *fibo2;

    fibo1 = malloc(sizeof(int)*5);
    fibo2 = malloc(sizeof(int)*10);

    printf("Fibonacci numbers in an array:\n");
    fibo_sequence_param(fibo1, 5);
    printArray(fibo1, 5);

    fibo_sequence_param(fibo2, 10);
    printArray(fibo2, 10);

    puts("");
}

void tugas6() {
    int *seq1, *seq2, *seq3, *seq4;

    seq1 = malloc(sizeof(int)*5);
    seq2 = malloc(sizeof(int)*6);
    seq3 = malloc(sizeof(int)*7);
    seq4 = malloc(sizeof(int)*7);

    printf("A series of pseudo-random numbers in an array:\n");
    random_param(seq1, 5);
    printArray(seq1, 5);

    random_param(seq2, 6);
    printArray(seq2, 6);

    random_param(seq3, 7);
    printArray(seq3, 7);

    random_param(seq4, 7);
    printArray(seq4, 7);

    puts("");
}

void tugas7() {
    //char names1[] = ["Debby", "Safira", 'Ipung', 'Melita'];
    //char names2[]= ['Adhie', 'Felix', 'Hermawansyah', 'Galih'];
    char names1[20][20];

    strcpy(names1[0],"Debby");
    strcpy(names1[1],"Safira");
    strcpy(names1[2],"Ipung");
    strcpy(names1[3],"Melita");

    printf("Sorting:\n");
    sort_name(names1, 'asc', 4);
    sort_name(names1, 'desc', 4);
    //sort_name(names2, 'asc', 4);
    //sort_name(names2, 'desc', 4);

    puts("");
}