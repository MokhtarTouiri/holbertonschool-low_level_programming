#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums
 * @a: pointer
 * @size: width
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum_l = 0, sum_r = 0;

	for (; i < size; i++)
	{
		sum_l += *(a + i * size + i);
		sum_r += *(a + (i * size) + (size - 1 - i));
	}
	printf("%i, %i\n", sum_l, sum_r);
}
