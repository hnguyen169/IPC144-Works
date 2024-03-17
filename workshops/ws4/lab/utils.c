// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/16/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void flushKey( void ) {
   char ch;
   do {
      ch = getchar( );
   } while ( ch != '\n' );
}

void nl( void ) {
   putchar( '\n' );
}

int getInt(void) {
   int num;
   scanf( "%d", &num );
   flushKey( );
   return num;
}

double getDbl(void) {
   double num;
   scanf( "%lf", &num );
   flushKey();
   return num;
}

float getFlt(void) {
   float num;
   scanf("%f", &num);
   flushKey();
   return num;
}