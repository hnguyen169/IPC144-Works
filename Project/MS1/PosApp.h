/* Citation and Sources...
Final Project Milestone 1
Module: PosAPP
Filename: PosAPP.h
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
void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);

int loadItems(const char filename[]);
void saveItems(const char filename[]);

#endif // !SENECA_POSAPP_H

