#include "holberton.h"

/**
 *print_rev - prints a string
 *@s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;
	for (; i > 0; i--)
		_putchar(s[i - 1]);
	_putchar('\n');
}
