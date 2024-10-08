// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 02/07/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	scanf("%d", &nos);

	if (nos < 5) {
		printf("Minimum number of students is 5!\n");
			nos = 0;
	}

	if (nos > 35) {
		printf("Maximum number of students is 35!\n");
			nos = 0;
	}

	return nos;
}

int getMark(int maximumAcceptableMarkValue) {
	int mark;
	printf("Please print a mark between 0 and %d:\n> ", maximumAcceptableMarkValue);
	scanf("%d", &mark);

		if (mark < 0 || mark > maximumAcceptableMarkValue) {
			printf("Invalid Mark!\n");
			return -1;
		}

		else {
			mark = mark * 100 / maximumAcceptableMarkValue;
		}

	return mark;
}

char grade(int mark) {
	char grd = 'X';
	if (mark > 89 && mark < 101) {
        grd = '+';
    }

    if (mark > 79 && mark < 90) {
		grd = 'A';
    }

    if (mark > 69 && mark < 80) {
		grd = 'B';
    }

    if (mark > 59 && mark < 70) {
		grd = 'C';
    }

    if (mark > 49 && mark < 60) {
		grd = 'D';
    }

	if (mark > -1 && mark < 50) {
		grd = 'F';
	}
	return grd;
}

