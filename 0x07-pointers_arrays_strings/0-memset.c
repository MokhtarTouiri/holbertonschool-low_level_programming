#include "holberton.h"
/**
 * _memset - memory
 * @s: memory space
 * @b: byte
 * @n: number
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
