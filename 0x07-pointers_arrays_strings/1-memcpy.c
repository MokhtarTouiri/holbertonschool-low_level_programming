#include "holberton.h"
/**
 * _memcpy - memory area
 * @dest: destination
 * @src: memory
 * @n: number
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
