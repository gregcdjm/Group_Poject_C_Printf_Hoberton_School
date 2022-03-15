#include "main.h"

/**
 * print_char - print char
 * @args: char
 * Return: rien
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - print string
 * @args: string
 * Return: rien
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char*);
	int i;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_int - print no decimal
 * @args: numbers without 0
 * Return: rien
 */

int print_int(va_list args)
{
	unsigned int m;
	int n, i, k, digits = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		digits++;
	}
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		digits++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	digits++;
	return (digits);
}

/**
* _printf - affiche une chaîne de caractère
* @format: la chaîne de caractère
* Return: affichage succésive de putchar
*/

int _printf(const char *format, ...)
#include "main.h"

/**
 * _printf - maint function
 * @format: main param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, n = 0;
	va_list args;
	print func[] = {
		{"c", print_char}, {"s", print_str},
		{"d", print_d}, {"i", print_d}, {"\0", NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]), n++;
		else if (format[i + 1])
		{
			j = 0;
			while (*(func[j].c) != '\0')
			{
				if (format[i + 1] == *(func[j].c))
				{
					n += func[j].f(args), i++;
					break;
				} j++;
			}
			if (*(func[j].c) == '\0')
			{
				if (format[i + 1] == '%')
					_putchar('%'), i++, n++;
				else
				{
					_putchar('%');
					_putchar(format[i + 1]), n += 2, i++;
				}
			}
		}
	}
	va_end(args);
	if (n == 0)
		return (-1);
	return (n);
}
