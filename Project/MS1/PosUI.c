#include "utils.h"
#include "PosAPP.h"

int menu(void) {
	printf(
		"The Sene-Store\n"
		"1- Iventory\n"
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
	loadItems("posdata.csv");
	while (!done) {
		menu();
		selection = getIntMM(0, 5, "Selectiion");
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
			saveItems("posdata.csv");
			printf("Goodbye!\n");
			done = 1;
			break;
		default:
			printf("Invalid Integer, try again: ");
			getIntMM(0, 5, "Selection");
		}
	}
}