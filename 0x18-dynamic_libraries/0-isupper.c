#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - A to Z
 * @c: is a char
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

