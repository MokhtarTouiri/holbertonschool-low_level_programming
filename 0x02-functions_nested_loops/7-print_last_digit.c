#include "holberton.h"
/**
 *print_last_digit - prints last digit
 *@r : integer
 *Return: 0
 */
int print_last_digit(int r)
{
int c = r % 10;
if (c < 0)
{
c *= -1;
_putchar(c + '0');
return (c);
}
_putchar(c + '0');
return (c);
}
