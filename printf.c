#include "main.h"

/**
 * print_char - print char
 * @args: char
 * Return: rien
 */

int print_char(va_list args)
{
	int c, k = 0;

	c = va_arg(args, int);
	_putchar(c), k = 0;
	return (k);
}

/**
 * print_str - print string
 * @args: string
 * Return: rien
 */

int print_str(va_list args)
{
	char *str;
	int i, k = 0;

	str = va_arg(args, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]), k = 0;
	}
	return (k);
}

/**
 * print_int - print no decimal
 * @args: numbers without 0
 * Return: rien
 */

int print_int(va_list args)
{
	int Div = 1;
	int n, k = 0;

	n = va_arg(args, int);

	if (n == 0)
		_putchar(48), k++;
	else if (n < 0)
	{
		_putchar(45), k++;
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48), k++;
		n = n % Div;
		Div = Div / 10;
	}
	return (k);
}

/**
 * print_0int - print decimal
 * @args: numbers with 0
 * Return: rien
 */

int print_0int(va_list args)
{
	int Div = 1;
	int n, k = 0;

	n = va_arg(args, int);

	if (n == 0)
		_putchar(48), k++;
	else if (n < 0)
	{
		_putchar(45), k++;
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48), k++;
		n = n % Div;
		Div = Div / 10;
	}
	return (k);
}

/**
* _printf - affiche une chaîne de caractère
* @format: la chaîne de caractère
* Return: affichage succésive de putchar
*/

int _printf(const char *format, ...)
{
	va_list args;
	struc func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_0int},
		{"d", print_int},
		{NULL, NULL}
	};
	int i, j, n = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]), n++;
		else if (format[i + 1] == '%')
			_putchar('%'), i++, n++;
		else
		{
			i++, j = 0;
			while (func[j].c && format[i] != *(func[j].c))
				j++;
			if (func[j].c)
				n += func[j].f(args);
			else
				_putchar('%'), _putchar(format[i]), n += 2;
		}
	}
	va_end(args);
	return (n);
}
