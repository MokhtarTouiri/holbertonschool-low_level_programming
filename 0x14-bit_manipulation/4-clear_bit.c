#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: int
 * @index: index int
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= sizeof
			(*n) * 8 )
		return (-1);
	{
		*n &= ~
			(1 << index);
		return (1);
	}
}
