/* Citation and Sources...
Final Project Milestone 3
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
#include <string.h>
#include "PosApp.h"
#include "POS.h"
#include "utils.h"


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
	int i;
	start("Saving Items");
	FILE* file = fopen(filename, "w");
	if (file) {
		for (i = 0; i < noOfItems; i++) {
			fprintf(file, "%s,%s,%.2lf,%d,%d\n", items[i].SKU, items[i].name, items[i].price, items[i].taxed, items[i].qty);
		}
		fclose(file);
		start("Done!");
	}
	else {
		printf("Could not open >>%s<<\n", filename);
	}
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
	int i;
	int billCount = 0;
	int index;
	double billTotal = 0.0;
	struct Item bill[MAX_BILL_ITEMS];
	
	start("Point Of Sale");
	
	while (billCount != MAX_BILL_ITEMS) {
		index = search();

		if (index == -2) {
			break;
		}
		else if (index == -1) {
			printf("SKU not found!\n");
		}
		else if (items[index].qty == 0) {
			printf("Item sold out!\n");
		}
		else {
			items[index].qty--;
			bill[billCount] = items[index];
			billCount++;

			display(&bill[billCount - 1]);
		}
	}
	if (billCount > 0) {
		printf("+---------------v-----------v-----+\n"
			"| Item          |     Price | Tax |\n"
			"+---------------+-----------+-----+\n");

		for (i = 0; i < billCount; i++) {
			billTotal += billDisplay(&bill[i]);
		}

		printf("+---------------^-----------^-----+\n");
		printf("| total:              %.2lf |\n", billTotal);
		printf("^---------------------------^\n");
	}
}

double billDisplay(const struct Item* item) {
	char List[15];
	strncpy(List, item->name, 14);
	List[14] = '\0';
	printf("| %-14s|%10.2lf | %-3s |\n", List, cost(item), item->taxed ? "Yes" : " ");
	return cost(item);
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

void display(const struct Item* item) {
	printf("=============v\n"
		   "Name:        %s\n"
		   "Sku:         %s\n"
		   "Price:       %.2lf\n"
		   "Price + tax: ",
		   item->name, item->SKU, item->price);

	if (item->taxed) {
		printf("%.2lf\n", cost(item));
	}
	else {
		printf("N/A\n");
	}

	printf("Stock Qty:   %d\n"
		   "=============^\n", 
		   item->qty);
}

int search(void) {
	char read[MAX_SKU_LEN + 1];
	int i;

	printf("Sku: ");

	fgets(read, MAX_SKU_LEN + 1, stdin);
	read[strcspn(read, "\n")] = '\0';

	if (read[0] == '\0') {
		return -2;
	}

	for (i = 0; i < noOfItems; i++) {
		if (strcmp(items[i].SKU, read) == 0) {
			return i;
		}
	}
	return -1;
}