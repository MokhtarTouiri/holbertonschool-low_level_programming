#include "holberton.h"
/**
 * _pow_recursion - print length
 *@x: int
 *@y: int
 *Return: power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
return (1);
}
