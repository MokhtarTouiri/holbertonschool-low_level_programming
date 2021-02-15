#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: int
 * @index: index int
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;
	{
		if (index >= sizeof(n) * 8)
			return (-1);
		return ((n >> index) & 1);
		{
			if (index == i)
				return (n & 1);
		}
	}
}
