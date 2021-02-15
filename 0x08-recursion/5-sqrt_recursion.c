#include "holberton.h"

/**
 * _sqrt - square
 * @i: sqrt
 * @x: number
 * Return: -1 or sqrt of c
 */
int _sqrt(int i, int x)
{
if (i * i == x)
return (i);
if (i * i > x)
return (-1);
return (_sqrt(i + 1, x));
}

/**
 * _sqrt_recursion - returns the natural square
 * @n: integer
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (_sqrt(1, n));
}
