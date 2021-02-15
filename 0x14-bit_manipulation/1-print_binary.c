#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: int
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	{
		if (n > 0)
			_putchar((n & 1) + '0');
		{
			if (n == 0)
				_putchar('0');
		}
	}
}
