#include "holberton.h"
#include <stdio.h>
/**
 * _islower - a to z
 * @c: int
 * Return: int
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

