/* -------------------------------
   03/11/2017
   Program PDP-6 Semester 1 UDINUS

   Developed by Tifan Dwi Avianto
   A11.2017.10629 / A11.4113
   ------------------------------- */

/* [KASUS 3]
   - Menentukan jenis segitiga berdasarkan ketiga sisi yang dimiliki
   - Mencari luas segitiga
   - Mencari keliling segitiga
*/

//Libraries
#include <stdio.h>
#include <stdlib.h>
//#include <string.h> //if using string variable
//#include <stdbool.h> //if using boolean variable 
#include <conio.h> //kbhit and getch function
//#include <ctype.h>
#include <math.h> //sqrt function

int main(void) {
   //Banner
   puts("       ____  ____  ____     __   ");
   puts("      |  _ \\|  _ \\|  _ \\   / /_  ");
   puts("      | |_) | | | | |_) | | '_ \\ ");
   puts("      |  __/| |_| |  __/  | (_) |");
   puts("      |_|   |____/|_|      \\___/ \n\n");

   //Title
   printf("[Kasus 3: Menentukan Jenis, Luas, dan Keliling Segitiga]\n\n");

   //Index
   float sisi1, sisi2, sisi3;
   float luasSegitiga, kelilingSegitiga, tinggiSegitiga;
   float s; //salah satu variable rumus heron
   int jenisSegitiga;

   //Input
   printf("Input 3 sisi segitiga:\n");
   scanf("%f %f %f", &sisi1, &sisi2, &sisi3);

   //menentukan jenis segitiga dan mencari luas segitiga
   if (sisi1 != sisi2 && sisi2 != sisi3 && sisi1 != sisi3) {
      //jenis segitiga sembarang
      jenisSegitiga = 1;

      //mencari luas segitiga dengan rumus heron
      s = (sisi1 + sisi2 + sisi3) / 2;
      luasSegitiga = sqrt(s * ((s - sisi1) * (s - sisi2) * (s - sisi3)));
   } else if (sisi1 == sisi2 && sisi2 == sisi3 && sisi1 == sisi3) { 
      //jenis segitiga sama sisi
      jenisSegitiga = 2;

      //mencari tinggi segitiga dengan rumus phytagoras
      tinggiSegitiga = sqrt(sisi2 * sisi2 - (sisi3 * 0.5) * (sisi3 * 0.5));

      //mencari luas segitiga
      luasSegitiga = 0.5 * (sisi3 * tinggiSegitiga);
   } else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) { 
      //jenis segitiga sama kaki
      jenisSegitiga = 3;

      //mencari tinggi segitiga dengan rumus phytagoras
      if (sisi1 == sisi2) {
         tinggiSegitiga = sqrt(sisi2 * sisi2 - (sisi3 * 0.5) * (sisi3 * 0.5));
         
         //mencari luas segitiga
         luasSegitiga = 0.5 * (sisi3 * tinggiSegitiga);
      } else if (sisi2 == sisi3) {
         tinggiSegitiga = sqrt(sisi3 * sisi3 - (sisi1 * 0.5) * (sisi1 * 0.5));
         
         //mencari luas segitiga
         luasSegitiga = 0.5 * (sisi1 * tinggiSegitiga);
      } else if (sisi1 == sisi3) {
         tinggiSegitiga = sqrt(sisi3 * sisi3 - (sisi2 * 0.5) * (sisi2 * 0.5));
         
         //mencari luas segitiga
         luasSegitiga = 0.5 * (sisi2 * tinggiSegitiga);
      } 
   }

   //mencari keliling segitiga
   kelilingSegitiga = sisi1 + sisi2 + sisi3;

   //Output
   printf("\n+-----------------------------------------------------------------+\n\n");
   switch (jenisSegitiga) {
      case 1 : {
         printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sembarang.\n\n");
         break;
      }
      case 2 : {
         printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sama sisi.\n\n");
         break;
      }
      case 3 : {
         printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sama kaki.\n\n");
         break;
      }
      default : {
         printf("foo\n");
      }
   }
   printf("Luas Segitiga: %.2f\n", luasSegitiga);
   printf("Keliling Segitiga: %.2f\n", kelilingSegitiga);

   //requires a keyboard input to close the program
   printf ("\nProgram telah selesai . . .");
   getch();

   return EXIT_SUCCESS;

}