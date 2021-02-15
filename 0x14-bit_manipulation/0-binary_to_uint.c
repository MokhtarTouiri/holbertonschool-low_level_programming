#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - convert binary number
 * @b: pointer
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int i;
	int length;
	int p;

	i = 0;
	length = 0;
	p = 1;

	if (!b)
		return (0);

	for (length = 0; b[length] != '\0';)
		(++length);

	(--length);
	for (p = 1; length >= 0; --length, (p *= 2))

	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			i += p;
		}
	}
	return (i);
}
