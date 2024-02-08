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
	printf("Please print a mark between 0 and '%d': \n > ", maximumAcceptableMarkValue);
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
	
    if (mark > 100 || mark < 0) {
        printf("X");
    }

	if (mark > 89 && mark < 101) {
        printf("A+");
    }

    if (mark > 79 && mark < 90) {
        printf("A");
    }

    if (mark > 69 && mark < 80) {
        printf("B");
    }

    if (mark > 59 && mark < 70) {
        printf("C");
    }

    if (mark > 49 && mark < 60) {
        printf("D");
    }

	if (mark > -1 && mark < 50) {
		printf("F");
	}
}

