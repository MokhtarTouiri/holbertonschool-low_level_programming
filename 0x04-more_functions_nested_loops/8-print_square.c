#include "holberton.h"

/**
*print_square - prints a square
*@y: 
*/

void print_square(int y)
{
	int i, s;

	if (y > 0)
	{
		for (i = 0 ; i < y ; i++)
		{
			for (s = 0 ; s < y ; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}

