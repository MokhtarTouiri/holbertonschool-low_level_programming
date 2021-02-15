#include "holberton.h"

/**
 * reverse_array - reverses the contents
 * @a: integer
 * @n: length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 1;

	for (i = 0; i < n / 2; i++)
	{
		a[i] += a[n - i - 1];
		a[n - i - 1] = a[i] - a[n - i - 1];
		a[i] -= a[n - i - 1];
	}
}
