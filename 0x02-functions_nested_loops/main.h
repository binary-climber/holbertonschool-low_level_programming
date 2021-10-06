/*
If a header file happens to be included twice, the compiler will process its 
contents twice and it will result in an error. The standard way to prevent this 
is to enclose the entire real contents of the file in a conditional, like this −
*/

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <ctype.h>
/* _putchar*/
int _putchar(char c);

/* print the alphabet*/
void print_alphabet(void);

/* print 10 time */
void print_alphabet_x10(void);

/* lowercase */
int _islower(int c);

/* is alpha */
int _isalpha(int c);

/* signo */
int print_sign(int n);

/* abs */
int _abs(int);

#endif
