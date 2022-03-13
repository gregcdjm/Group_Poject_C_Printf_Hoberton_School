#include "main.h"

/**
* _printf - affiche une chaîne de caractère
* @format: la chaîne de caractère
* @...: les variables de la chaîne format
* Return: affichage succésive de putchar
*/

int _printf(const char *format, ...)
{
	va_list args;
	struc func[] = {
		{"c", print_char},
		{"s", print_str},/*
		{"i", print_0int},
		{"d", print_int},*/
		{NULL, NULL}
	};
	int i, j;

	for (i = 0; format[i]; i++)
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			j = 0;
			while (*(func[j].c) != format[i + 1])
			{
				func[j].f(args);
				j++;
			}
			i++;
		}
	return (0);
}
