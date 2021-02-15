#include "holberton.h"

/**
 * _prime - checks
 * @i: factor
 * @x: prime number
 * Return: 1 if prime, 0 if not
 */
int _prime(int i, int x)
{
if (x < 2 || !(x % i))
return (0);
else if (i > x / 2)
return (1);
else
return (_prime(i + 1, x));
}

/**
 * is_prime_number - number is prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (_prime(2, n));
}
