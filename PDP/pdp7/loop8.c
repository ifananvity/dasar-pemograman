/* -------------------------------
   Name   : loop8.c
   Author : Tifan Dwi Avianto 
   NIM    : A11.2017.10629
   Group  : A11.4113
   ------------------------------- */

/**
 * kota bandung mengalami kenaikan bahan pokok
 * ibu Budi beli 3 ayam petelur yang berumur 3 bulan, Rp 150k / each
 * ayam petelur akan aktif pada bulan 4 - 20
 * ayam petelur menghasilkan 3 telur/hari
 * 1kg telur = Rp. 14.500
 * ibu budi mengeluarkan Rp. 200k tiap bulan untuk pakan dan perawatan
 *
 * buat program untuk menghitung keuntungan penjualan telur dari pertama pembelian -- berumur 20 bulan
 * a. mengunakan for loop
 * b. cetak jumlah telur dari pertama pembelian -- berumur 20 bulan
 * c. cetak jumlah total butir telur yang dihasilkan dengan satuan kg
 * d. cetak keuntungan penjualan telur  
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Constant definitions
#define EGG_PRICE 14500     // per kilogram
#define MONTHLY_FEED_EXPENSES 200000
#define HEN_PRICE 150000

int main(void) {
	//Declarations
	int i;
	int raiseCost;
	int eggSales;
	int eggSalesPerMonth;
	int profit;
	int profitPerMonth;
	int eggProduced;
	int eggProducedPerMonth;
	float eggProducedInKg;

	eggProducedPerMonth = 3 * (3 * 30);     // capacity to produce egg per month
	eggSalesPerMonth = (eggProducedPerMonth / 15) * EGG_PRICE;
	 
	//initial value
	eggProduced = 0;
	profitPerMonth = 0;

	for (i = 3; i <= 20; i++) {
		if (i > 3) {
			eggProduced += eggProducedPerMonth;
			profitPerMonth += eggSalesPerMonth;
		}
		profitPerMonth -= MONTHLY_FEED_EXPENSES;
		
		printf("Bulan %d :\n", i);
		printf("- Telur yang telah dihasilkan: %d butir\n", eggProduced);
		printf("- Keuntungan: Rp.%d,-\n\n", profitPerMonth);
	}

	eggProducedInKg = eggProduced / 15; // 1kg = 15 eggs
	eggSales = eggProducedInKg * EGG_PRICE;
	raiseCost = MONTHLY_FEED_EXPENSES * 18;
	profit = eggSales - raiseCost;

	printf("Total telur yang dihasilkan: %d butir (%.1f kg)\n\n", eggProduced, eggProducedInKg);

	printf("Keuntungan:\n");
	printf("Penjualan telur      Rp.%d,-\n", eggSales);
	printf("Pakan dan perawatan  Rp.%d,-\n", raiseCost);
	printf("                     ------------- (-)\n");
	printf("                     Rp.%d,- (Rp.%d,- jika kurangi modal)\n", profit, profit - (HEN_PRICE * 3));


	printf("\nPress any key to exit . . .");
	getch();
	return EXIT_SUCCESS;
}