/* Citation and Sources...
Final Project Milestone 2
Module: PosApp
Filename: PosApp.c
Version 1.0
Author	Harrison Nguyen
Revision History
-----------------------------------------------------------
Date      Reason

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosApp.h"
#include "POS.h"
#include <string.h>

struct Item items[MAX_NO_ITEMS];
int noOfItems;

void start(const char* action) {
   printf(">>>> %s...\n", action);
}

int loadItems(const char filename[]) {
	noOfItems = 0;
	start("Loading Items");
	FILE* file = fopen(filename, "r");
	if (file) {
		while (noOfItems < MAX_NO_ITEMS && fscanf(file, "%6[^,],%60[^,],%lf,%d,%d\n", items[noOfItems].SKU, items[noOfItems].name, &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].qty) == 5) {
			noOfItems++;
		}
		fclose(file);
		start("Done!");
		return noOfItems;
	}
	else {
		printf("Error: Failed to open file!\n");
		return -1;
	}
}

void saveItems(const char filename[]) {
   start("Saving Items");
}

void inventory(void) {
   double tav = 0.0;
   int i;
   start("List Items");
   listItems();
   for (i = 0; i < noOfItems; i++) {
	   tav += cost(&items[i]) * items[i].qty;
   }
   printf("                               Total Asset: $  | %13.2lf |\n", tav);
   printf("-----------------------------------------------^---------------^\n");
}

void addItem(void) {
   start("Adding Item");
}

void removeItem(void) {
   start("Remove Item");
}

void stockItem(void) {
   start("Stock Items");
}

void POS(void) {
   start("Point Of Sale");
}

double cost(const struct Item* item) {
	double the_cost;
	the_cost = item->price * (1 + item->taxed * TAX);
	return the_cost;
}

void listItems(void) {
	char iName[19];
	int i;
	printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n"
		   "-----|--------|--------------------|-------|---|-----|---------|\n");
	for (i = 0; i < noOfItems; i++) {
		strncpy(iName, items[i].name, 18);
		iName[18] = '\0';
		printf("%4d | %6s | %-18s | %5.2lf | %c | %3d | %7.2lf |\n", i + 1, items[i].SKU, iName, items[i].price, items[i].taxed ? 'T' : ' ', items[i].qty, cost(&items[i]) * items[i].qty);
	}
	printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}