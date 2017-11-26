/* -------------------------------
   Name   : loop6.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   Desc   : Mencetak semua character ASCII dari index 0-127 menggunakan
            perulangan while,for dan do-while
   ------------------------------- */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//Declarations
	int i, ascii;

	printf("1. While loop\n");
	printf("2. For loop\n");
	printf("3. Do-While loop\n");
	printf("Select: \n");
	char selection = getchar();

	switch (selection) {
		case '1' : {
			//set initial value
			i = 0;
			ascii = 0;

			printf("+----------------[while loop]----------------+\n");
			//while loop
			while (i <= 127) {
				printf("char-%d : %c\n", i, ascii++);
				i++;
			}
			break;
		}
		case '2' : {
			//set back initial value
			ascii = 0;

			printf("\n+-----------------[for loop]-----------------+\n");
			//for loop
			for (i = 0; i <= 127; i++) {
				printf("char-%d : %c\n", i, ascii++);
			}
			break;
		}
		case '3' :{
			//set back initial value
			i = 0;
			ascii = 0;

			printf("\n+---------------[do-while loop]---------------+\n");
			//do-while loop
			do {
				printf("char-%d : %c\n", i, ascii++);
				i++;
			} while (i <= 127);
			break;
		}
	}

	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}