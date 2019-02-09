/*
==============================================================================
Author  : Tifan Dwi Avianto
NIM     : A11.2017.10629
Version : 1.0 - 22/11/2018
Desc    : PSDA 5: Stack ADT with linked list
==============================================================================
*/

// Libraries
#include "header.h"

int main(void) {

    flag = FALSE;
    while(!flag) {
    	printf("\n----------\n");
    	printf("STACK ADT with linked list\n");
	    printf("1. Push\n");
	    printf("2. Pop\n");
	    printf("3. Display\n");
	    printf("4. Exit\n");
	    fflush(stdin);
	    char selection = getchar();

		switch (selection) {
			case '1' : {
				printf("Masukan angka yang akan di push: ");
				scanf("%d", &num);
				push(num);
				break;
			}
			case '2' : {
				pop();
				break;
				
			}
			case '3' : {
				puts("");
				print(S);
				break;
			}
			case '4' : {
				flag = TRUE;
				break;
			}
			default : {
				break;
			}
		}
	}

    getch();

    return EXIT_SUCCESS;
}