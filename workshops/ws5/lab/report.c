// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/21/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "report.h"

struct Student getStudent(void) {
	struct Student toRead;
	printf("Name\n> ");
	getLine(toRead.name);
	printf("Student Number\n> ");
	toRead.stNo = getInt();
	printf("Mark\n> ");
	toRead.mark = getFlt();
	printf("----------------------\n");
	return toRead;
}

void printStudent(struct Student S) {
	printf("%-30s| %-15d|%6.1f\n", S.name, S.stNo, S.mark);
}

void printReport(const struct Student S[], int num) {
	int i;
	double avgMark = 0;
	double totalMark = 0;
	printf("Name                           student number   mark\n"
		   "------------------------------+----------------+------\n");
	for (i = 0; i < num; i++) {
		printStudent(S[i]);
		totalMark += S[i].mark;
	}
	avgMark = totalMark / num;
	printf("------------------------------+----------------+------\n"
		   "                                       Average:   %.1lf", avgMark);
}

void readStudentInfo(struct Student S[], int num) {
	int i;
	printf("Enter %d student records:\n", num);
	for (i = 0; i < num; i++) {
		printf("Enter Student Information # %d:\n", i + 1);
		S[i] = getStudent();
	}
}
