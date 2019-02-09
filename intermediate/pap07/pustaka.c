/*
 * pustaka.c
 *
 *  Created on: 1 May 2018
 *      Author: Tifan Dwi Avianto
 */


#include "pustaka.h"

int add_rec(int num1, int num2) {
    if(num2 != 0) {
        printf("1 + ");
        return add_rec(num1, num2-1) + 1;
    } else {
        printf("%d\n", num1);
        return num1;
    }
}

int subs_rec(int num1, int num2) {
    if(num2 != 0) {
        printf("- 1 ");
        return subs_rec(num1, num2-1) - 1;
    } else {
        printf("+ %d\n", num1);
        return num1;
    }
}

int mul_rec(int num1, int num2) {
    if(num2 > 1) {
        printf("%d + ", num1);
        return mul_rec(num1, num2-1) + num1;
    } else {
        printf("%d\n", num1);
        return num1;
    }
}

int div_rec(int num1, int num2) {
    if (num1 - num2 < 0){
        printf("- %d\n", num2);
        return 0;
    } else if (num1 - num2 == 0) {
        printf("- %d\n", num2);
        return 1;
    } else {
        printf("- %d ", num2);
        return div_rec(num1 - num2, num2) + 1;
    }
}

int pow_rec(int num1, int num2) {
    if(num2 != 0) {
        if (num2 > 1)
            printf("%d x ", num1);
        else
            printf("%d\n", num1);
        return num1 * pow_rec(num1, num2-1);
    } else {
        return 1;
    }
}

int factorial(int number) {
    if (number == 0 || number == 1) {
        printf("%d\n", number);
        return 1;
    } else {
        printf("%d x ", number);
        return(number * factorial(number - 1));
    }
}

void fibonacci(int number) {
    int first = 0, second = 1, next;
    int i;

    if (number < 1)
        return;

    for (i = 1; i <= number; i++) {
        printf("%d", second);
        if (i < number)
            printf(", ");

        next = first + second;
        first = second;
        second = next;     
    }

    puts("");
}



/* ------------------------------ TUGAS ------------------------------ */

void tugas1() {
    printf("Add two numbers using recursion:\n");
    printf("Hasil : %d\n", add_rec(5, 6));
    printf("Hasil : %d\n", add_rec(9, 3));
    printf("Hasil : %d\n", add_rec(7, 4));
    printf("Hasil : %d\n", add_rec(8, 1));

    puts("");
}

void tugas2() {
    printf("Substract two numbers using recursion:\n");
    printf("Hasil : %d\n", subs_rec(9, 2));
    printf("Hasil : %d\n", subs_rec(7, 4));
    printf("Hasil : %d\n", subs_rec(2, 5));
    printf("Hasil : %d\n", subs_rec(5, 5));

    puts("");
}

void tugas3() {
    printf("Multiply two numbers using recursion:\n");
    printf("Hasil : %d\n", mul_rec(9, 2));
    printf("Hasil : %d\n", mul_rec(2, 5));

    puts("");
}

void tugas4() {
    printf("Divide two numbers using recursion: \n");
    printf("Hasil : %d\n", div_rec(20, 5));
    printf("Hasil : %d\n", div_rec(35, 6));
    printf("Hasil : %d\n", div_rec(30, 5));
    printf("Hasil : %d\n", div_rec(25, 4));

    puts("");
}

void tugas5() {
    printf("Calculate power using recursion: \n");
    printf("Hasil : %d\n", pow_rec(2, 5));
    printf("Hasil : %d\n", pow_rec(5, 2));
    printf("Hasil : %d\n", pow_rec(6, 4));
    printf("Hasil : %d\n", pow_rec(5, 5));

    puts("");
}

void tugas6() {
    printf("Calculate factorial using recursion: \n");
    printf("Hasil : %d\n", factorial(5));
    printf("Hasil : %d\n", factorial(7));

    puts("");
}

void tugas7() {
    printf("Fibonacci: \n");
    fibonacci(5);
    fibonacci(8);
    fibonacci(10);
    fibonacci(2);

    puts("");
}

void tugas8() {
    int data1[] = {2, 5, 7, 9, 12, 16, NULL};
    int data2[] = {3, 5, 6, 8, 1, 8, NULL};
    int data3[] = {5, 82, 33, 55, 22, NULL};
    int data4[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, NULL};

    printf("%d\n", length);
}