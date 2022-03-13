#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

type struct func {
	char* c;
	void (*f)(va_list args);
}struct
int _printf(const char *format, ...);

#endif
