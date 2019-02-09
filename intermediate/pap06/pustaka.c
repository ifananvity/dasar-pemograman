/*
 * pustaka.c
 *
 *  Created on: 1 April 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void bubbleSort(int arr[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
}

int binary_search(int angka, int data[], int jml_data) {
    int first, last, middle;
    int i;
    int flag = FALSE;

    first = 0;
    last = jml_data - 1;
    middle = (first+last)/2;

    bubbleSort(data, jml_data);

    while (first <= last) {
        for (i = first; i <= last; i++) {
            printf("%d ", data[i]);
        }
        puts("");

        if (data[middle] == angka) {
            flag = TRUE;
            printf("%d\n", data[middle]);
            break;
        } else if (data[middle] < angka) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }

        middle = (first + last)/2;
    }
    if (first > last)
        flag = FALSE;

    return(flag);
}

int search_word(char word[], char text[]) {
    int i, j, k;
    int count;
    int flag = FALSE;

    for (i = 0; i <= strlen(text)-(strlen(word)-1); i++) {
        count = 0;
        for (j = i, k = 0; k < strlen(word); j++, k++) {
            if (word[k] == text[j]) {
                count = count+1;
            }
        }
        if (count == strlen(word))
            flag = TRUE;
        
    }

    return(flag);
}

int is_anagram(char text1[], char text2[]) {
    // Create 2 count arrays and initialize all values as 0
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; text1[i] && text2[i]; i++) {
        count1[text1[i]]++;
        count2[text2[i]]++;
    }
 
    // If both strings are of different length. Removing this
    // condition will make the program fail for strings like
    // "aaca" and "aca"
    if (text1[i] || text2[i])
      return(FALSE);
 
    // Compare count arrays
    for (i = 0; i < 256; i++)
        if (count1[i] != count2[i])
            return(FALSE);
 
    return(TRUE);

}

/* ------------------------------ FUNCTION ------------------------------ */

void tugas1() {
    int list1 [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int list2 [] = {4, 8, 6, 1, 10, 3, 9, 2, 7, 5};

    printf("Search a number using binary search: (1=true/0=false)\n");
    printf("list1 : %d\n", binary_search(3, list1, 10));
    printf("list2 : %d\n", binary_search(8, list2, 10));

    puts("");
}

void tugas2() {
    printf("Search a number using binary search: (1=true/0=false)\n");
    printf("Dian -> Universitas Dian Nuswantoro : %d\n", search_word("Dian", "Dianersitas Dian Nuswantoro"));
    printf("Algo -> Algoritma : %d\n", search_word("Algo", "Algoritma"));
    printf("Program -> Pemograman : %d\n", search_word("Program", "Pemograman"));
    printf("Dinus -> Dian Nuswantoro : %d\n", search_word("Dinus", "Dian Nuswantoro"));
}

void tugas3() {
    printf("Search a number using binary search: (1=true/0=false)\n");
    printf("the eyes & they see : %d\n", is_anagram("the eyes", "they see"));
    printf("astronomer & moonstarer : %d\n", is_anagram("astronomer", "moonstarer"));
    printf("udinus & dian nuswantoro : %d\n", is_anagram("udinus", "dian nuswantoro"));
    printf("columbia & australia : %d\n", is_anagram("columbia", "australia"));
}