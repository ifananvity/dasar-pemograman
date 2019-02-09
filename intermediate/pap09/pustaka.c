/*
 * pustaka.c
 *
 *  Created on: 20 May 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

pecahan makePecahan(int pemb, int peny) {
    // This function declare a "pecahan" struct with the given 2 parameter as numor and denom;
    pecahan new;
    new.pembilang = pemb;
    new.penyebut = peny;

    return new;
}

void printPecahan(pecahan p) {
    // This function prints numor/denom with the given pecahan struct
    printf("%d/%d\n",p.pembilang, p.penyebut);
}

int pembilang(pecahan p) {
    // This function return the numerator from the given fraction
    return p.pembilang;
}

int penyebut(pecahan p) {
    // This function return the denumerator from the given fraction
    return p.penyebut;
}

pecahan addPecahan(pecahan p1, pecahan p2) {
    // This function return the calculated sum of 2 given fraction
    pecahan sum;
    sum.pembilang = (p1.pembilang * p2.penyebut) + (p2.pembilang * p1.penyebut);
    sum.penyebut = p1.penyebut * p2.penyebut;

    return sum;
}

pecahan subPecahan(pecahan p1, pecahan p2) {
    // This function subtract 2 given fraction and return the result
    pecahan sub;
    sub.pembilang = (p1.pembilang * p2.penyebut) - (p2.pembilang * p1.penyebut);
    sub.penyebut = p1.penyebut * p2.penyebut;

    return sub;
}

pecahan mulPecahan(pecahan p1, pecahan p2) {
    // This function multiply 2 given fraction and return the result
    pecahan mul;
    mul.pembilang = (p1.pembilang * p2.pembilang);
    mul.penyebut = (p1.penyebut * p2.penyebut);

    return mul;
}

pecahan divPecahan(pecahan p1, pecahan p2) {
    // This function divide 2 given fracion and return the result
    pecahan div;
    div.pembilang = (p1.pembilang * p2.penyebut);
    div.penyebut = (p1.penyebut * p2.pembilang);

    return div;
}

float desimalPecahan(pecahan p) {
    // This fuction return the float value of a given fraction
    return (float)p.pembilang/(float)p.penyebut; 
}

int isEqual(pecahan p1, pecahan p2) {
    // This function compares 2 fraction and check if both is equivalent
    int flag = 0;

    if (p1.pembilang/getGcd(p1) == p2.pembilang/getGcd(p2) &&
        p1.penyebut/getGcd(p1) == p2.penyebut/getGcd(p2)) {
        flag = 1;
    }

    return(flag);
}

int isBigger(pecahan p1, pecahan p2) {
    // This function check if fraction 1 is bigger than fraction 2
    int flag = p1.pembilang * p2.penyebut - p1.penyebut * p2.pembilang;

    return(flag > 0) ? 1 : 0;
}

int isSmaller(pecahan p1, pecahan p2) {
    // This function check if fraction 1 is smaller than fraction 2
    int flag = p1.pembilang * p2.penyebut - p1.penyebut * p2.pembilang;

    return(flag < 0) ? 1 : 0;
}

int getGcd(pecahan p) {
    // This fraction returns the GCD (Greater Division Division) of a given fraction
    // and then divide that fraction by it's gcd to get the simplified version
    int gcd;

    if (p.pembilang < p.penyebut) {
        gcd = p.pembilang;
    } else {
        gcd = p.penyebut;
    }

    // calculate the gcd
    while (gcd > 1) {
        if (p.pembilang % gcd == 0 && p.penyebut % gcd == 0)
            break;
        gcd--;
    }

    return gcd;
}

/* ------------------------------ TUGAS ------------------------------ */

void tugas1() {
    printf("Declare a new fraction struct\n");
    makePecahan(4, 9);
    makePecahan(7, 2);
    makePecahan(6, 20);
    makePecahan(8, 10);

    puts("");
}

void tugas2() {
    printf("Print a fraction:\n");
    printPecahan(makePecahan(4, 9));
    printPecahan(makePecahan(7, 2));
    printPecahan(makePecahan(6, 20));
    printPecahan(makePecahan(8, 10));

    puts("");
}

void tugas3() {
    printf("Print a numerator of a fraction:\n");
    printf("%d\n", pembilang(makePecahan(4, 9)));
    printf("%d\n", pembilang(makePecahan(7, 2)));
    printf("%d\n", pembilang(makePecahan(6, 20)));
    printf("%d\n", pembilang(makePecahan(8, 10)));

    puts("");
}

void tugas4() {
    printf("Print a denumerator of a fraction:\n");
    printf("%d\n", penyebut(makePecahan(4, 9)));
    printf("%d\n", penyebut(makePecahan(7, 2)));
    printf("%d\n", penyebut(makePecahan(6, 20)));
    printf("%d\n", penyebut(makePecahan(8, 10)));

    puts("");
}

void tugas5() {
    printf("Sum a fraction:\n");
    printPecahan(addPecahan(makePecahan(4,9), makePecahan(1, 2)));
    printPecahan(addPecahan(makePecahan(5,7), makePecahan(1, 4)));
    printPecahan(addPecahan(makePecahan(4,9), makePecahan(3, 10)));
    printPecahan(addPecahan(makePecahan(3,4), makePecahan(1, 5)));

    puts("");
}

void tugas6() {
    printf("Sub a fraction:\n");
    printPecahan(subPecahan(makePecahan(4,9), makePecahan(1, 5)));
    printPecahan(subPecahan(makePecahan(5,7), makePecahan(1, 4)));
    printPecahan(subPecahan(makePecahan(4,9), makePecahan(3, 10)));
    printPecahan(subPecahan(makePecahan(3,4), makePecahan(1, 5)));

    puts("");
}

void tugas7() {
    printf("Multiply a fraction:\n");
    printPecahan(mulPecahan(makePecahan(4,9), makePecahan(1, 2)));
    printPecahan(mulPecahan(makePecahan(5,7), makePecahan(1, 4)));
    printPecahan(mulPecahan(makePecahan(4,9), makePecahan(3, 10)));
    printPecahan(mulPecahan(makePecahan(3,4), makePecahan(1, 5)));

    puts("");
}

void tugas8() {
    printf("Divide a fraction:\n");
    printPecahan(divPecahan(makePecahan(4,9), makePecahan(1, 2)));
    printPecahan(divPecahan(makePecahan(5,7), makePecahan(4, 2)));
    printPecahan(divPecahan(makePecahan(4,9), makePecahan(8, 2)));
    printPecahan(divPecahan(makePecahan(1,2), makePecahan(2, 1)));

    puts("");
}

void tugas9() {
    printf("Print the decimal number of a fraction:\n");
    printf("%.2f\n", desimalPecahan(makePecahan(4, 9)));
    printf("%.2f\n", desimalPecahan(makePecahan(7, 2)));
    printf("%.2f\n", desimalPecahan(makePecahan(6, 20)));
    printf("%.2f\n", desimalPecahan(makePecahan(8, 10)));

    puts("");
}

void tugas10() {
    printf("Check if 2 fraction is equivalent: (1=true, 0=false)\n");
    printf("%d\n", isEqual(makePecahan(4, 9), makePecahan(8, 18)));
    printf("%d\n", isEqual(makePecahan(7, 2), makePecahan(14, 4)));
    printf("%d\n", isEqual(makePecahan(4, 9), makePecahan(6, 20)));
    printf("%d\n", isEqual(makePecahan(7, 2), makePecahan(8, 10)));

    puts("");
}

void tugas11() {
    printf("Check if fraction 1 is bigger: (1=true, 0=false)\n");
    printf("%d\n", isBigger(makePecahan(14, 2), makePecahan(7, 2)));
    printf("%d\n", isBigger(makePecahan(7, 2), makePecahan(6, 20)));
    printf("%d\n", isBigger(makePecahan(6, 20), makePecahan(4, 9)));
    printf("%d\n", isBigger(makePecahan(8, 10), makePecahan(7, 2)));

    puts("");
}

void tugas12() {
    printf("Check if fraction 1 is smaller: (1=true, 0=false)\n");
    printf("%d\n", isSmaller(makePecahan(4, 9), makePecahan(7, 2)));
    printf("%d\n", isSmaller(makePecahan(7, 2), makePecahan(6, 20)));
    printf("%d\n", isSmaller(makePecahan(4, 9), makePecahan(6, 20)));
    printf("%d\n", isSmaller(makePecahan(8, 10), makePecahan(7, 2)));

    puts("");
}