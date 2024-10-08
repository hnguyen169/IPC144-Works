// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 02/19/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey( void ) {
   char ch=0;
   do {
      ch = getchar( );
   } while ( ch != '\n' );
}

int getInt( ) {
   int num=0;
   scanf( "%d", &num );
   flushKey( );
   return num;
}

int getIntLimited(int min, int max) {
   int val = min -1;
   do {
      val = getInt();
      if (val < min || val > max) {
         printf("Number is out of range (%d <= number <= %d), retry:\n> ", min, max);
      }
   } while (val< min || val > max);
   return val;
}

double getDbl( ) {
   double num = 0.0;
   scanf( "%lf", &num );
   flushKey();
   return num;
}