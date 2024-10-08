// Name: Harrison Nguyen
// Email: hnguyen169@myseneca.ca
// Student ID: 167096239
// Date: 03/21/2024
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

/* string handling functions: */

void strCpy( char des[], const char src[] ) {
   int i ;
 //  for ( i = 0; src[i] != NULL; i++ ) {
   for ( i = 0; src[i]; i++ ) {
         des[i] = src[i];
   }
   des[i] = 0;
}

void flushKey( void ) {
   while ( getchar( ) != '\n' );
}

void nl( void ) {
   putchar( '\n' );
}

int getInt( ) {
   int num;
   char newline = ' ';
   while ( scanf( "%d%c", &num, &newline ) != 2 
                              || newline != '\n' ) {
      flushKey( );
      printf( "Bad integer, try again\n> " );
   }
   return num;
}

double getDbl( ) {
   double num;
   char newline = ' ';
   while ( scanf( "%lf%c", &num, &newline ) != 2 ||
      newline != '\n' ) {
      flushKey( );
      printf( "Bad real number, try again\n> " );
   }
   return num;
}

void getLine( char str[] ) {
   scanf( "%[^\n]", str );
   flushKey( );
}

float getFlt() {
    float num;
    char newline = ' ';
    while (scanf("%f%c", &num, &newline) != 2 ||
        newline != '\n') {
        flushKey();
        printf("Bad real number, try again\n> ");
    }
    return num;
}