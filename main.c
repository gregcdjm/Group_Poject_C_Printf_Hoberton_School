#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "X";
	char c = 'r';

	_printf("1A%s2B%c", s, c);
	return (0);/*1AX2Br*/
}
