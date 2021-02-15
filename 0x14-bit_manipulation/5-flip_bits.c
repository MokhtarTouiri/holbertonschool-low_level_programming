#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - flip to get from one number to another
 * @n: int
 * @m: int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	int i;
	{
		f = n ^ m;
		i = 0;
		for (; f; f >>= 1)
			i += f & 1;
		{
			if ((f & 1) == 1)
				i++;
			f >>= 1;
		}
		return (i);
	}
}
