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
	char c = 'B';
	char *s = "CD";
	char f = 'E';
	char *g = "FG";

	_printf("A%c%s%c%sH", c, s, f, g);
	return (0);/*ABCDEFGH*/
}
