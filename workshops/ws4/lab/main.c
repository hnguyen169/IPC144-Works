// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/16/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
   int stdno[100] = { 0 };
   float mark[100] = { 0.0 };
   int num;
   printf("Enter number of the student records\n> ");
   num = getInt();
   readStudentInfo(stdno, mark, num);
   printReport(stdno, mark, num);
   return 0;
}
