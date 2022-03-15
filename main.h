#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct func - function
 * @c: param
 * @f: param
 */

typedef struct func
{
	char *c;
	int (*f)(va_list args);
} struc;

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int func_print(char j, va_list args);

#endif
