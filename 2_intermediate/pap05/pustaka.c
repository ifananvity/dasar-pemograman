/*
 * pustaka.c
 *
 *  Created on: 1 April 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

int sequent_search(int angka, int data[], int jml_data) {
    int i;
    int flag = FALSE;

    for (i = 0; i < jml_data; i++) {
        if (data[i] == angka)
            flag = TRUE;
    }

    return(flag);
}

int is_inverse(int list1[], int list2[], int jml_data) {
    int i, j;
    int flag = FALSE;

    for (i = 0, j = jml_data; i < jml_data; i++, j--) {
        if (list1[i] == list2[j])
            flag = TRUE;
    }

    return(flag);
}

void min_max(int data[], int jml_data, int *min, int *max) {
    int i;

    /* Assume first element as maximum and minimum */
    *max = data[0];
    *min = data[0];

    for (i = 0; i < jml_data; i++) {
        if (data[i] > *max)
            *max = data[i];
        if (data[i] < *min)
            *min = data[i];
    }
}

int min_max_gap(int data[], int jml_data) {
    int i;
    int max, min;

    /* Assume first element as maximum and minimum */
    max = data[0];
    min = data[0];

    for (i = 0; i < jml_data; i++) {
        if (data[i] > max) {
            max = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }
    }

    return(max-min);
}

int at_least(char huruf, int jml, char teks[]) {
    int i;
    int count;
    int flag = FALSE;

    i = count = 0;
    while (teks[i] != '\0') {
        if (huruf >= 'a' && huruf <= 'z') {
            if (teks[i] == huruf || teks[i] == huruf-32) {
                count++;
            }
        } else if (huruf >= 'A' && huruf <= 'Z') {
            if (teks[i] == huruf || teks[i] == huruf+32) {
                count++;
            }
        }
        i++;
    }

    if (count == jml)
        flag = TRUE;

    return(flag);
}

/* ------------------------------ FUNCTION ------------------------------ */

void tugas1() {
    int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};

    printf("Search the present of number: (1=true/0=false)\n");
    printf("15 : %d\n", sequent_search(15, data, 9));
    printf("25 : %d\n", sequent_search(25, data, 9));
    printf("39 : %d\n", sequent_search(39, data, 9));
    printf("17 : %d\n", sequent_search(17, data, 9));

    puts("");
}

void tugas2() {
    int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {5, 4, 3, 2, 1};
    int list3[] = {6, 7, 8, 9, 10};
    int list4[] = {10, 9, 8, 7, 6};

    printf("Check if 2 array are reversible: (1=true/0=false)\n");
    printf("list1 & list2 : %d\n", is_inverse(list1, list2, 5));
    printf("list2 & list3 : %d\n", is_inverse(list2, list3, 5));
    printf("list1 & list3 : %d\n", is_inverse(list1, list3, 5));
    printf("list2 & list2 : %d\n", is_inverse(list2, list2, 5));
    printf("list3 & list4 : %d\n", is_inverse(list3, list4, 5));

    puts("");
}

void tugas3() {
    int a, b;

    int list1[] = {9, 12, 43, 13, 15};
    int list2[] = {12, 4, 19, 9, 22, 1};
    int list3[] = {8, 21, 29, 17, 20, 13};
    int list4[] = {18, 11, 19, 25, 31, 15};

    printf("Find the maximum and minimum element of an array:\n");
    min_max(list1, 5, &a, &b);
    printf("list1 : \n");
    printf("   - min : %d\n", a);
    printf("   - min : %d\n", b);

    min_max(list2, 5, &a, &b);
    printf("list1 : \n");
    printf("   - min : %d\n", a);
    printf("   - min : %d\n", b);

    min_max(list3, 5, &a, &b);
    printf("list1 :\n");
    printf("   - min : %d\n", a);
    printf("   - min : %d\n", b);

    min_max(list4, 5, &a, &b);
    printf("list1 : \n");
    printf("   - min : %d\n", a);
    printf("   - min : %d\n", b);

    puts("");
}

void tugas4() {
    int list1[] = {9, 12, 43, 13, 15};
    int list2[] = {12, 4, 19, 9, 22, 1};
    int list3[] = {8, 21, 29, 17, 20, 13};
    int list4[] = {18, 11, 19, 25, 31, 15};

    printf("Find the maximum and minimum element of an array:\n");
    printf("list1 : %d\n", min_max_gap(list1, 5));
    printf("list2 : %d\n", min_max_gap(list2, 6));
    printf("list3 : %d\n", min_max_gap(list3, 6));
    printf("list4 : %d\n", min_max_gap(list4, 6));

    puts("");
}

void tugas5() {
    printf("Check if the amount of given alphabet in a string corresponds: (1=true/0=false)\n");
    printf("Larry Page (3 'r'): %d\n", at_least('r', 3, "Larry Page"));
    printf("Matt Mullenweg (2 'm') : %d\n", at_least('m', 2, "Matt Mullenweg"));
    printf("Mark Zuckerberg (2 'a') : %d\n", at_least('a', 2, "Mark Zuckerberg"));
    printf("Jimmy Wales (2 'm') : %d\n", at_least('m', 2, "Jimmy Wales"));
}