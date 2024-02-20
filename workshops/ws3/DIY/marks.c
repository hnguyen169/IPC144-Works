// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 02/19/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "marks.h"
#include "utils.h"
#include "report.h"

void prnGrade(char grade) {
	if (grade != '+') {
		printf("%c", grade);
	}

	else {
		printf("A+");
	}
}

int getNoOfStudents(void) {	
	int nos = 0;
	printf("Please enter the number of students\n> ");
	nos = getInt();

	if (nos < 5) {
		printf("Minimum number of students is 5!\n");
		nos = 0;
	} 
	else if (nos > 35) {
		printf("Maximum number of students is 35!\n");
		nos = 0;
	}
	return nos;
}

int getMark(int maximumAcceptableMarkValue, int currentStudentNumber) {
	int mark;
	printf("%d- Please print a mark between 0 and %d:\n> ", currentStudentNumber, maximumAcceptableMarkValue);
	mark = getInt();

	if (mark < 0 || mark > maximumAcceptableMarkValue) {
		printf("Invalid Mark!\n");
		return -1;
	}
	else {
		int percent = mark * 100 / maximumAcceptableMarkValue;
		printf("Entered: %d%%, ", percent);
		char grd = grade(percent);
		printf("%c\n", grd);
	}
	return mark;
}

char grade(int mark) {
	char grd = 'X';

	if (mark > 89 && mark < 101) {
        grd = '+';
    }
    else if (mark > 79 && mark < 90) {
		grd = 'A';
    }
    else if (mark > 69 && mark < 80) {
		grd = 'B';
    }
    else if (mark > 59 && mark < 70) {
		grd = 'C';
    }
    else if (mark > 49 && mark < 60) {
		grd = 'D';
    }
	else if (mark > -1 && mark < 50) {
		grd = 'F';
	}
	return grd;
}
