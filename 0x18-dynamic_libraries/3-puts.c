#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check
 * @s: string
 * Return: void
 */
void _puts(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
_putchar('\n');
}

