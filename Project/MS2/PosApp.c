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

#include <stdio.h>

void start(const char* action) {
   printf(">>>> %s...\n", action);
}
int loadItems(const char filename[]) {
   start("Loading Items");
   return 1;
}
void saveItems(const char filename[]) {
   start("Saving Items");
}

void inventory(void) {
   start("Inventory");
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
