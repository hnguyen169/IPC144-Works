/* Citation and Sources...
Final Project Milestone 1
Module: PosUI
Filename: PosUI.c
Version 1.0
Author	Harrison Nguyen
Revision History
-----------------------------------------------------------
Date      Reason

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/

#include <stdio.h>
#include "utils.h"
#include "PosApp.h"

void menu(void) {
	printf(
		"The Sene-Store\n"
		"1- Inventory\n"
		"2- Add item\n"
		"3- Remove item\n"
		"4- Stock item\n"
		"5- POS\n"
		"0- exit program\n> "
	);
}

void runPos(const char filename[]) {
	int done = 0;
	int selection = 0;
	loadItems(filename);
	while (!done) {
		menu();
		selection = getIntMM(0, 5, "Selection");
		switch (selection) {
		case 1:
			inventory();
			break;
		case 2:
			addItem();
			break;
		case 3:
			removeItem();
			break;
		case 4:
			stockItem();
			break;
		case 5:
			POS();
			break;
		case 0:
			saveItems(filename);
			printf("Goodbye!\n");
			done = 1;
			break;
		default:
			printf("Invalid Integer, try again: ");
			getIntMM(0, 5, "Selection");
		}
	}
}