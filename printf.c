#include "main.h"
/**
 * print_char - print char
 * @args: arg
 * Return: rien
 */
void print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
}
/**
 * print_string - print string
 * @args: arg
 * Return: rien
 */
void print_str(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * print_%d - print decimal
 * @args: arg
 * Return: rien
 */
/**
void print_int(va_list args)
{
	int d;
	int i;
	int j = 0;

	d = va_arg(args, int);
	for (i = 0; d[i] != '\0' && j != 1; i++)
	{
		j = 1;
	}
	for (i = 0; d[i] != '\0'; i++)
	{
		_putchar(d[i] + 48);
	}
}*/
/**
 * print_%i - print %i
 * @args: arg
 * Return: rien

void print_0int(va_list args)
{
	int d;
	int i;
	int j = 0;

	i = va_arg(args, int);
	for (d = 0; i[d] != '\0' && j
	_putchar(i);
}
*/

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

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i] == '%')
		{
			i++;
			for (j = 0; format[i] != *(func[j].c); j++)
				;
			if (func[j].c)
				func[j].f(args);
		}
	}
	va_end(args);
	return (0);
}
