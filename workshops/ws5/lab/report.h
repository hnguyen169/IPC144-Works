// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/21/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SENECA_REPORT_H
#define SENECA_REPORT_H

struct Student {
	double mark;
	int stNo;
	char name[31];
};
void printReport(const struct Student S[], int num);
void readStudentInfo(struct Student S[], int num);
void printStudent(struct Student S);
struct Student getStudent(void);


#endif // !SENECA_REPORT_H
