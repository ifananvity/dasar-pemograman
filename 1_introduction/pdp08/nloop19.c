/* ------------------------------------------------------------------------
   Author   : Tifan Dwi Avianto ( github.com/ifananvity )
   NIM      : A11.2017.10629 / A11.4113
   Version  : 1.0 - 25/11/2017
   Desc     : Prints out rocket & launch pad with loop
   ------------------------------------------------------------------------ */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    //Declaration
    int i;      // outer loops
    int j, k;   // inner loop head rocket
    int l, m;   // inner loop base rocket
    int n, o;   // inner loop fins rocket
    int p, q;   // inner loop launch pad
    
    // set initial max value
    k = o = 20;

    // first line
    printf("/]-[\\");
    for (i = 0; i <= k; i++) {
    	printf(" ");
    }
	printf("|\n");

    /* ---- 1ND LOOP (ROCKET) ----*/
    for (i = 1; i <= 36; i++) {
        // LEFT SECTION (blankspace mostly)
        for (j = 1; j <= k; j++) {
            // output crane
            if (j == 1) {
                printf("[]-[]");
            }
            if (i == 6) {
                printf("=");
            } else if (i == 7) {
            	// output hook 
                printf("=");
            } else {
            	//output blankspace
                printf(" ");
            }
        }

        // MIDDLE SECTION (the rocket pattern)
        for (l = 0; l <= m; l += 2) {
            // output outer layer / border "|"
            if (l == 0) {
                if (i >= 6 && i <= 32) {
                    printf("|");
                } else {
                    printf("/");
                }
            }
            // output inner layer "*"
            printf("*");
        }

        // RIGHT SECTION (blankspace mostly)
        for (n = 1; n <= o; n++) {
            // output outer layer / border "|
            if (n == 1) {
                if (i >= 6 && i <= 32) {
                    printf("|");
                } else {
                    printf("\\");
                }
            }

            // output blankspace
            printf(" ");
        }

        // newline
        printf("\n");
        
        // in/decrement max values
        if (i <= 5 || i >= 32) {
            k--;
            m += 4;
            o--;
        }
    }

    /* ---- 2ND LOOP (LAUNCH PAD) ----*/
    for (i = 1; i <= 3; i++) {
        // output crane
        printf("[]-[]");

        // output last rocket pattern (the engine)
        if (i == 1) {
            for (p = 1; p < 26; p++) {
                if (p <= 18) {
                    printf(" ");
                } else {
                    printf("*");
                }
            }
            printf("\n");

        // output launch pad base/ground
        } else {
            for (q = 1; q < 42; q++) {
                printf("=");
            }
            printf("[]-[]\n");
        }
    }

    // pause the console
    printf("\nPress any key to exit . . .");getch();

    return EXIT_SUCCESS;
}