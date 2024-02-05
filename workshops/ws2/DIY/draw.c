// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 02/05/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height) {

    int heightCounter, widthCounter;

    // Top row
    printf("%c", leftTop);
    widthCounter = 1;
    while (widthCounter < width - 1) {
        printf("%c", top);
        widthCounter = widthCounter + 1;
    }
    printf("%c\n", topRight);

    // Middle row(s)
    heightCounter = 1;
    while (heightCounter < height - 1) {
        printf("%c", left);
        widthCounter = 1;
        while (widthCounter < width - 1) {
            printf("%c", fill);
            widthCounter = widthCounter + 1;
        }
        printf("%c\n", right);
        heightCounter = heightCounter + 1;
    }

    // Bottom row
    widthCounter = 1;
    while (widthCounter < width - 1) {
        printf("%c", buttomLeft);

        while (widthCounter < width - 1) {
            printf("%c", buttom);
            widthCounter = widthCounter + 1;
        }
        printf("%c\n", rightButtom);
    }
}