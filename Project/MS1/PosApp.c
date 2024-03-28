/* Citation and Sources...
Final Project Milestone 1
Module: PosAPP
Filename: PosAPP.c
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

void displayAction(const char* action) {
   printf(">>>> %s...\n", action);
}
int loadItems(const char filename[]) {
   displayAction("Loading Items");
   return 1;
}
void saveItems(const char filename[]) {
   displayAction("Saving Items");
}

void inventory(void) {
   displayAction("Inventory");
}

void addItem(void) {
   displayAction("Adding Item");
}
void removeItem(void) {
   displayAction("Remove Item");
}
void stockItem(void) {
   displayAction("Stock Items");
}
void POS(void) {
   displayAction("Point Of Sale");
}
