/* Citation and Sources...
Final Project Milestone 3
Module: PosApp
Filename: PosApp.h
Version 1.0
Author	Harrison Nguyen
Revision History
-----------------------------------------------------------
Date      Reason

-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------*/

#ifndef SENECA_POSAPP_H
#define SENECA_POSAPP_H
#include "POS.h"

struct Item {
	char SKU[MAX_SKU_LEN + 1];
	char name[61];
	double price;
	int taxed;
	int qty;
};

double billDisplay(const struct Item* item);
double cost(const struct Item* item);
int loadItems(const char filename[]);
void saveItems(const char filename[]);
void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
void listItems(void);

#endif // !SENECA_POSAPP_H

