// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 02/19/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "marks.h"
#include "report.h"

void report(int numberOfStudents) {
    int maximumAcceptableMarkValue;
    printf("What are the marks out of?\n> ");
    maximumAcceptableMarkValue = getInt();

    int lowestMark = maximumAcceptableMarkValue;
    int highestMark = 0;
    int totalMarks = 0;
    double totalPercent = 0.0;
    int i;

    for (i = 1; i <= numberOfStudents; i++) {
        int mark = getMark(maximumAcceptableMarkValue, i);
        while (mark == -1) {
            mark = getMark(maximumAcceptableMarkValue, i);
        }

        if (mark < lowestMark)
            lowestMark = mark;
        if (mark > highestMark)
            highestMark = mark;
        totalMarks += mark;

        int markPercent = (mark * 100) / maximumAcceptableMarkValue;
        totalPercent += markPercent;
    }

    int lowestMarkPercent = (lowestMark * 100) / maximumAcceptableMarkValue;
    int highestMarkPercent = (highestMark * 100) / maximumAcceptableMarkValue;
    double averagePercent = totalPercent / numberOfStudents;

    printf("Lowest mark entered: %d\n", lowestMarkPercent);
    printf("Highest mark entered: %d\n", highestMarkPercent);
    printf("Average of all marks: %.1lf%%\n", averagePercent);
}