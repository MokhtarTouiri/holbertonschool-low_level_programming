#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int i;
	{
		i = 1;
		return (*(char *)&i);
	}
}
