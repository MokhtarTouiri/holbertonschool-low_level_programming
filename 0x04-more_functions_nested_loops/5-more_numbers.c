#include "holberton.h"
/**
 * more_numbers - print the more numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, N;

for (i = 0; i < 10; i++)
{
for (N = 0; N <= 14; N++)
{
if (N / 10 != 0)
{
_putchar(N / 10 + '0');
}
_putchar(N % 10 + '0');
}
_putchar('\n');
}
}
