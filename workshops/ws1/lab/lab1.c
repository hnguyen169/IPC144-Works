//Name: Harrison Nguyen
//Email: hnguyen169@myseneca.ca
//ID: 167096239
//Date Compeleted: 01/17/2024
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include <stdio.h>	
void title(void);	// introdudes the title function
void line(void);
void info(void);
int main(void) {
	title();	//calls(runs) the title function
	line();
	info();
	line();
	return 0;
}
//implementing title function
//what title is supposed to do
void title(void) {
	printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name:\n\tHarrison Nguyen\nEmail:\n\thnguyen169@myseneca.ca\n");	
}