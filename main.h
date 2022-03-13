#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct func{
	char *c;
	void (*f)(va_list args);
}struc;

void print_char(va_list args);
void print_str(va_list args);
void print_int(va_list args);
void print_0int(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
