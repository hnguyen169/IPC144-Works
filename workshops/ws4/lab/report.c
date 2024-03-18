// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/16/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void readStudentInfo(int stno[], float mark[], int num) {
	int i;
	printf("Enter %d student records:\n", num);
	for (i = 0; i < num; i++) {
		printf("Enter Student Information # %d:\n", i + 1);
		printf("Student Number\n> ");
		stno[i] = getInt();
		printf("Mark\n> ");
		mark[i] = getFlt();
		printf("----------------------\n");
	}
}

void printReport(const int stno[], const float mark[], int num) {
	int i;
	double avgMark = 0;
	double totalMark = 0;
	printf("student number   mark\n"
		   "---------------+------\n");
	for (i = 0; i < num; i++) {
		printf("%-15d|%6.1lf\n", stno[i], mark[i]);
		totalMark += mark[i];
		avgMark = totalMark / num;
	}
	printf("---------------+------\n"
		   "       Average: %6.1lf", avgMark);
}