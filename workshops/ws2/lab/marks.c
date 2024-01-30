// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 01/30/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getInt(void);
double getDouble(void);
double calculateAverageMark(void);

double calculateAverageMark(void) {
	double markTotal = 0;
	int counter = 0;
	double markValue;
	double average;
	int noOfMarks;

	printf("Please enter the number of marks\n> ");
	noOfMarks = getInt();
	while (counter < noOfMarks) {
		printf("Enter mark #%d\n> ", counter + 1);
		markValue = getDouble();
		markTotal = markTotal + markValue;
		counter = counter + 1;

	}

	average = markTotal / noOfMarks;

	return average;

}

