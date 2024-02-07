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
	int value=0;
	return value;
}

int getMark(int maximum) {
	int percentage = 0;
	return percentage;
}

char grade(int mark) {
	if (mark > 100 || mark < 0) {
		printf("X");
	}
	else {
		if (mark >  -1 && mark < 50) {
			printf("F");
		}
		else if (mark > 49 && mark < 60) {
			printf("D");
		}
		else if (mark > 59 && mark < 70) {
			printf("C");
		}
		else if (mark > 69 && mark < 80) {
			printf("B");
		}
		else if (mark > 79 && mark < 90) {
			printf("A");
		}
		else if (mark > 89 && mark < 101) {
			printf("A+");
		}
	}
}

