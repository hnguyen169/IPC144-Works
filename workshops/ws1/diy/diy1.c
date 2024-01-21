//Name: Harrison Nguyen
//Email: hnguyen169@myseneca.ca
//ID: 167096239
//Date Compeleted: 01/18/2024
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void title(void);
void line(void);
void info(void);
void marks(void);
int main(void) {
	title();
	line();
	info();
	line();
	marks();
	line();

	return 0;
}

void title(void) {
	printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name:\n\tHarrison Nguyen\nEmail:\n\thnguyen169@myseneca.ca\n");
}

void marks(void) {
	int n1;
	int n2;
	int n3;
	int val;
	printf("Enter the marks for the following subjects,\n");
	printf("IPC144: ");
	scanf("%d", &n1);
	printf("ULI101: ");
	scanf("%d", &n2);
	printf("EAC150: ");
	scanf("%d", &n3);

	val = (n1 + n2 + n3) / 3;

	printf("The average is: %d\n", val);
}